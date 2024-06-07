//
// Created by felipe on 5/27/24.
//

#include "ReportsController.h"
#include "Menu.h"
#include "MainController.h"

ReportsController::ReportsController(AbstractSeriesDAO *seriesDAO) : seriesDAO(seriesDAO) {

}

ReportsController::~ReportsController() {

}

void ReportsController::start(){
    vector<string> menuItens
            { "Por titulo", "Por canal/streaming", "Por ano", "Por nota", "Retornar"};
    vector<void (ReportsController::*)()> functions
            {&ReportsController::actionReportByTitle, &ReportsController::actionReportByNetwork,
             &ReportsController::actionReportByYear, &ReportsController::actionReportByRating};
    MainController::launchActions("Menu Series", menuItens, functions, this);
}


void ReportsController::actionReportByTitle() {
    string title;
    cout << "Digite o titulo que deseja realizar o relatorio:" << endl;
    getline(cin, title);
    vector<Series*> series = this->seriesDAO->getSeriesByName(title);
    if(!series.empty())
        printReport("Titulo", series);
    else
        cout << "Nao ha series com esse titulo para realizar relatorio" << endl;
}

void ReportsController::actionReportByNetwork() {
    string network;
    cout << "Digite qual streaming deseja realizar o relatorio:" << endl;
    getline(cin, network);
    vector<Series*> series = this->seriesDAO->getSeriesByNetwork(network);
    if(!series.empty())
        printReport("Canal/Streaming", series);
    else
        cout << "Nao ha series nesse canal de streaming para realizar relatorio" << endl;
}

void ReportsController::actionReportByYear() {
    int releaseYear;
    cout << "Digite o ano de lancamento do qual deseja realizar o relatorio: " << endl;
    cin >> releaseYear;
    vector<Series*> series = this->seriesDAO->getSeriesByYear(releaseYear);
    if(!series.empty())
        printReport("Ano de Lancamento", series);
    else
        cout << "Nao ha series lancadas nesse ano para realizar relatorio" << endl;
}

void ReportsController::actionReportByRating() {
    int rating;
    cout << "Digite a nota da qual deseja realizar o relatorio: " << endl;
    cin >> rating;
    vector<Series*> series = this->seriesDAO->getSeriesByRating(rating);
    if(!series.empty())
        printReport("Nota", series);
    else
        cout << "Nao ha series com essa nota para realizar relatorio" << endl;
}

void ReportsController::printReport(string title, vector<Series*> series) {
     int width = title.length() + 14;
     cout << endl;
     for(int i = 0; i < width; i++)
         cout << "*";
     cout << endl;
     cout << "Relatorio por " << title << endl;
     for(int i = 0; i < width; i++)
         cout << "*";
     cout << endl;
    for(auto item : series)
        cout << *item << endl;
    cout << endl;
}
