//
// Created by felipe on 5/20/24.
//

#include <iostream>
#include "SeriesController.h"
#include "Menu.h"
#include "MainController.h"

using namespace std;


SeriesController::SeriesController(AbstractSeriesDAO *seriesDAO) : seriesDAO(seriesDAO){

}

SeriesController::~SeriesController() {
}

void SeriesController::start() {
    vector<string> menuItens
            { "Incluir novo registro", "Recuperar um registro", "Editar um registro", "Excluir um registro", "Listar todas", "Retornar"};
    vector<void (SeriesController::*)()> functions
            {&SeriesController::actionAddSeries, &SeriesController::actionSearchSeriesByName, &SeriesController::actionUpdateSeries, &SeriesController::actionDeleteSeries, &SeriesController::actionDisplaySeries};
    MainController::launchActions("Menu Series", menuItens, functions, this);
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


void SeriesController::actionDisplaySeries() {
    try {
        vector<Series*> series = this->seriesDAO->getAllSeries();
        if(!series.empty()){
            for (auto* serie : series){
                cout << *serie << endl;
            }
        }
        else
            cout << "Nenhuma serie cadastrada" << endl;
    }
    catch (const exception& e){
        cerr << "Error getting series: " << e.what() << endl;
    }
}

void SeriesController::actionSearchSeriesByName() {
    try {
        cout << "Digite o nome da série que deseja recuperar: " << endl;
        string name;
        getline(cin, name);
        vector<Series*> series = this->seriesDAO->getSeriesByName(name);
        if(!series.empty()){
            int choice = 1;
            if(series.size() > 1) {
                cout << "Escolha a serie que deseja consultar: " << endl;
                choice = this->selectSeries(series);
            }
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
    vector<Series *> series = this->seriesDAO->getSeriesByName(name);
    if (!series.empty()) {
        int position = 1;
        if (series.size() > 1) {
            cout << "Escolha a serie que deseja editar: " << endl;
            position = this->selectSeries(series);
        }
        Series *selectedSeries = series.at(position - 1);
        editAttribute("nome", &Series::setName, selectedSeries);
        editAttribute("ano de lancamento", &Series::setReleaseYear, selectedSeries);
        editAttribute("numero de temporadas", &Series::setNumSeasons, selectedSeries);
        editAttribute("numero de episodios", &Series::setEpisodeCount, selectedSeries);
        editAttribute("personagens principais", &Series::setMainCharacters, selectedSeries);
        editAttribute("atores principais", &Series::setMainActors, selectedSeries);
        editAttribute("canal de streaming", &Series::setNetwork, selectedSeries);
        editAttribute("nota", &Series::setRating, selectedSeries);

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

void SeriesController::editAttribute(string attribute, void (Series::*setter)(int), Series *series) {
    char choice;
    cout << "Deseja editar o/a " << attribute << " da serie? Y/N" << endl;
    cin >> choice;
    if(choice == 'Y'){
        int newAttribute;
        cout << "Digite o/a novo/a " << attribute << " da serie: " << endl;
        cin >> newAttribute;
        (series->*setter)(newAttribute);
    }
}

void SeriesController::editAttribute(string attribute, void (Series::*setter)(string), Series *series) {
    char choice;
    cout << "Deseja editar o/a " << attribute << " da serie? Y/N" << endl;
    cin >> choice;
    if(choice == 'Y'){
        string newAttribute;
        cout << "Digite o/a novo/a " << attribute << " da serie: " << endl;
        cin >> ws;
        getline(cin, newAttribute);
        (series->*setter)(newAttribute);
    }
}

