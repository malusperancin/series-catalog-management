//
// Created by felipe on 5/20/24.
//

#include <iostream>
#include "SeriesController.h"
#include "Menu.h"

using namespace std;


SeriesController::SeriesController(AbstractSeriesDAO *seriesDAO) : seriesDAO(seriesDAO){

}

SeriesController::~SeriesController() {
}

void SeriesController::actionAddSeries() {
    string name;
    int releaseYear;
    int numSeasons;
    int episodeCount;
    string mainActors;
    string mainCharacters;
    string network;
    int rating;

    cout << "Digite o nome da serie: ";
    getline(cin, name);


    cout << "Digite o ano de lancamento: ";
    cin >> releaseYear;

    cout << "Digite o numero de temporadas: ";
    cin >> numSeasons;

    cout << "Digite o numero de episodios: ";
    cin >> episodeCount;

    cout << "Digite os personagens principais (seprados por virgula): ";
    cin.ignore();
    getline(cin, mainCharacters);

    cout << "Digite os atores principais (seprados por virgula): ";
    getline(cin, mainActors);

    cout << "Digite o canal/streaming: ";
    getline(cin, network);

    cout << "Digite a nota de classificacao (0-10): ";
    cin >> rating;

    this->seriesDAO->addSeries(new Series(name, releaseYear, numSeasons, episodeCount, mainActors, mainCharacters, network, rating));
}

void SeriesController::launchSeriesActions(string title, vector<string> menuItens,
                                           vector<void (SeriesController::*)()> functions) {

    try
    {
        Menu menu(menuItens, title, "Sua opcao: ");
        menu.setSymbol("*");

        while (int choice = menu.getChoice())
        {
            (this->*functions.at(choice - 1))();
        }
    }
    catch (const exception &e)
    {
        cerr << e.what() << endl;
    }
}



void SeriesController::actionDisplaySeries() {
    vector<Series*> series = this->seriesDAO->getAllSeries();
    if(!series.empty()){
        for (auto* serie : series){
            cout << *serie << endl;
        }
    }
    else
        cout << "Nenhuma serie cadastrada" << endl;
}

void SeriesController::actionSearchSeriesByName() {
    try {
        string name;
        getline(cin, name);
        vector<Series*> series = this->seriesDAO->getSeriesByName(name);
        if(!series.empty()){
            cout << "Escolha a serie que deseja consultar: " << endl;
            int choice = this->selectSeries(series);
            cout << "\nDescricao completa da serie desejada: " << endl;
            cout << *(series.at(choice-1)) << endl;
        }else{
            cout << "Nenhuma serie com esse nome" << endl;
        }
    }
    catch (const exception& e){
        cerr << e.what() << endl;
    }
}

int SeriesController::selectSeries(vector<Series *> series) {
    int i = 1;
    for(auto serie : series){
        cout << i << " - " << serie->toShortString() << endl;
        i++;
    }
    int choice = 0;
    do{
        cin >> choice;
    } while(choice < 0 && choice <= i);
    return choice;
}

void SeriesController::actionUpdateSeries() {
    cout << "Digite o nome da serie que deseja editar: " << endl;
    string name;
    getline(cin, name);
    vector<Series*> series = this->seriesDAO->getSeriesByName(name);
    if(!series.empty()){
        int position = this->selectSeries(series);
        Series* selectedSeries = series.at(position-1);
        char choice;
        cout << "Deseja editar o nome da serie? Y/N" << endl;
        cin >> choice;
        if(choice == 'Y'){
            string newName;
            cin.ignore();
            cout << "Digite o novo nome da serie: " << endl;
            getline(cin, newName);
            selectedSeries->setName(newName);
        }
        cout << "Deseja editar o ano de lancamento da serie? Y/N" << endl;
        cin >> choice;
        if(choice == 'Y'){
            int newYear;
            cout << "Digite o novo ano de lancamento da serie: " << endl;
            cin >> newYear;
            selectedSeries->setReleaseYear(newYear);
        }
        cout << "Deseja editar o numero de temporadas da serie? Y/N" << endl;
        cin >> choice;
        if(choice == 'Y'){
            int newNumSeasons;
            cout << "Digite o novo numero de temporadas da serie: " << endl;
            cin >> newNumSeasons;
            selectedSeries->setNumSeasons(newNumSeasons);
        }
        cout << "Deseja editar o numero de episodios da serie? Y/N" << endl;
        cin >> choice;
        if(choice == 'Y'){
            int newNumEpisodes;
            cout << "Digite o novo numero de episodios da serie: " << endl;
            cin >> newNumEpisodes;
            selectedSeries->setEpisodeCount(newNumEpisodes);
        }
        cout << "Deseja editar os atores da serie? Y/N" << endl;
        cin >> choice;
        if(choice == 'Y'){
            string newActors;
            cin.ignore();
            cout << "Digite os novos atores da serie: " << endl;
            getline(cin, newActors);
            selectedSeries->setMainActors(newActors);
        }
        cout << "Deseja editar os personagens da serie? Y/N" << endl;
        cin >> choice;
        if(choice == 'Y'){
            string newCharacters;
            cout << "Digite os novos personagens da serie: " << endl;
            cin.ignore();
            getline(cin, newCharacters);
            selectedSeries->setMainCharacters(newCharacters);
        }
        cout << "Deseja editar o canal de streaming da serie? Y/N" << endl;
        cin >> choice;
        if(choice == 'Y'){
            string newNetwork;
            cout << "Digite o novo canal de streaming da serie: " << endl;
            cin.ignore();
            getline(cin, newNetwork);
            selectedSeries->setNetwork(newNetwork);
        }
        this->seriesDAO->updateSeries(selectedSeries);
    }else{
        cout << "Nenhuma serie com esse nome" << endl;
    }
}

void SeriesController::actionDeleteSeries() {
    cout << "Digite o nome da serie que deseja deletar: " << endl;
    string name;
    getline(cin, name);
    vector<Series*> series = this->seriesDAO->getSeriesByName(name);
    if(!series.empty()){
        int position = this->selectSeries(series);
        Series* selectedSeries = series.at(position-1);
        cout << "Realmente deseja deletar a serie a seguir? Y/N" << endl;
        cout << *selectedSeries << endl;
        char choice;
        cin >> choice;
        if(choice == 'Y')
            this->seriesDAO->deleteSeries(selectedSeries->getId());
    }else{
        cout << "Nenhuma serie com esse nome" << endl;
    }
}
