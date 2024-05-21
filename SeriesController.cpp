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
    cin.ignore();
    getline(cin, mainActors);

    cout << "Digite o canal/streaming: ";
    cin.ignore();
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
        int i = 1;
        for (auto* serie : series){
            cout << i << ". "<< *serie << endl;
            i++;
        }
    }
    else
        cout << "Nenhuma série cadastrada" << endl;
}