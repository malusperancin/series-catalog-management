#include <iostream>
#include <memory>
#include "SeriesDBDAO.h"
#include "ServerDBConnection.h"
#include "SeriesMemDAO.h"
#include "MainController.h"
#include "TextFromFile.h"
#include "Menu.h"
#include "SeriesController.h"

void MainController::start() {
    this->serverDbConnection = nullptr;
    this->seriesDAO = nullptr;
    try{
        this->serverDbConnection = new ServerDBConnection();
        this->seriesDAO = new SeriesDBDAO(serverDbConnection);
    }
    catch (const sql::SQLException& e){
        cerr << "Ooops... we got an error trying to connect with the database. The system is now working with local memory \n" << e.what() << endl;
        this->seriesDAO = new SeriesMemDAO(new MemoryDBConnection());
    }
	vector<string> menuItens
		{ "Series", "Relatorios", "Ajuda", "Creditos", "Sair"};
	vector<void (MainController::*)()> functions
		{&MainController::launchSeriesMenu, &MainController::launchReportsMenu, &MainController::actionHelp, &MainController::actionCredits };
	launchActions("Main Menu", menuItens, functions);
}

void MainController::launchActions(string title, vector<string> menuItens, vector<void (MainController::*)()> functions) {
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

void MainController::actionToDo() {
	cout << "Action to do" << endl;
}

void MainController::launchSeriesMenu() {
    vector<string> menuItens
            { "Incluir novo registro", "Recuperar um registro", "Editar um registro", "Excluir um registro", "Retornar"};
    unique_ptr<SeriesController> seriesController(new SeriesController(this->seriesDAO));
    vector<void (SeriesController::*)()> functions
            {&SeriesController::actionAddSeries, &SeriesController::actionDisplaySeries, &SeriesController::actionAddSeries, &SeriesController::actionAddSeries};
    seriesController->launchSeriesActions("Menu Series", menuItens, functions);
}

void MainController::launchReportsMenu() {
    vector<string> menuItens
            { "Por titulo", "Por canal/streaming", "Por ano", "Por nota", "Retornar"};
    vector<void (MainController::*)()> functions
            {&MainController::actionToDo, &MainController::actionToDo, &MainController::actionToDo, &MainController::actionToDo};
    launchActions("Menu Relatorios", menuItens, functions);
}

void MainController::actionHelp() {
    unique_ptr<TextFromFile> helpText(new TextFromFile("help.txt"));
    cout << helpText->getFileContent() << endl;
}

void MainController::actionCredits() {
    unique_ptr<TextFromFile> creditsText(new TextFromFile("credits.txt"));
    cout << creditsText->getFileContent() << endl;
}