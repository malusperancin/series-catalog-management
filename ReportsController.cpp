//
// Created by felipe on 5/27/24.
//

#include "ReportsController.h"
#include "Menu.h"

ReportsController::ReportsController(AbstractSeriesDAO *seriesDAO) : seriesDAO(seriesDAO) {

}

ReportsController::~ReportsController() {

}

void ReportsController::launchReportsActions(string title, vector<string> menuItens,
                                             vector<void (ReportsController::*)()> functions) {

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

void ReportsController::actionReportByTitle() {
    string title;
    cout << "Digite o titulo que deseja realizar o relatorio:" << endl;
    getline(cin, title);
    vector<Series*> series = this->seriesDAO->getSeriesByName(title);
    if(!series.empty())
        for(auto serie : series){
            cout << *serie << endl;
        }
    else
        cout << "Nao ha series com esse titulo para realizar relatorio" << endl;
}

void ReportsController::actionReportByNetwork() {
    string network;
    cout << "Digite qual streaming deseja realizar o relatorio:" << endl;
    getline(cin, network);
    vector<Series*> series = this->seriesDAO->getSeriesByNetwork(network);
    if(!series.empty())
        for(auto serie : series){
            cout << *serie << endl;
        }
    else
        cout << "Nao ha series nesse canal de streaming para realizar relatorio" << endl;
}

void ReportsController::reportByYear() {

}
