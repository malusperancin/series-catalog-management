#include <iostream>
#include <memory>
#include "SeriesDBDAO.h"
#include "ServerDBConnection.h"
#include "SeriesMemDAO.h"
#include "MainController.h"
#include "TextFromFile.h"
#include "Menu.h"
#include "SeriesController.h"
#include "ReportsController.h"

MainController::MainController() {

}


MainController::~MainController() {
    delete this->serverDbConnection;
    serverDbConnection = nullptr;
    delete this->seriesDAO;
    seriesDAO = nullptr;
    delete memoryDbConnection;
    memoryDbConnection = nullptr;
}

void MainController::start() {
    this->serverDbConnection = nullptr;
    this->seriesDAO = nullptr;
    try{
        this->serverDbConnection = new ServerDBConnection();
        this->seriesDAO = new SeriesDBDAO(serverDbConnection);
    }
    catch (const sql::SQLException& e){
        cerr << "Ooops... we got an error trying to connect with the database. The system is now working with local memory \n" << e.what() << endl;
        this->memoryDbConnection = new MemoryDBConnection();
        this->seriesDAO = new SeriesMemDAO(this->memoryDbConnection);
    }
	vector<string> menuItens
		{ "Series", "Relatorios", "Ajuda", "Creditos", "Sair"};
	vector<void (MainController::*)()> functions
		{&MainController::launchSeriesMenu, &MainController::launchReportsMenu, &MainController::actionHelp, &MainController::actionCredits };
	launchActions<MainController>("Menu Principal", menuItens, functions, this);
}

template<typename ControllerClass>
void MainController::launchActions(string title, vector<string> menuItens, vector<void (ControllerClass::*)()> functions, ControllerClass* controller) {
    try
		{
		Menu menu(menuItens, title, "Sua opcao: ");
		menu.setSymbol("*");

		while (int choice = menu.getChoice())
			{
                (controller->*functions.at(choice - 1))();
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
    unique_ptr<SeriesController> seriesController(new SeriesController(this->seriesDAO));
    seriesController->start();
}

void MainController::launchReportsMenu() {
    unique_ptr<ReportsController> reportsController(new ReportsController(this->seriesDAO));
    reportsController->start();
}

void MainController::actionHelp() {
    unique_ptr<TextFromFile> helpText(new TextFromFile("help.txt"));
    cout << helpText->getFileContent() << endl;
}

void MainController::actionCredits() {
    unique_ptr<TextFromFile> creditsText(new TextFromFile("credits.txt"));
    cout << creditsText->getFileContent() << endl;
}



template void MainController::launchActions<ReportsController>(string, vector<string>, vector<void (ReportsController::*)()>, ReportsController*);
template void MainController::launchActions<SeriesController>(string, vector<string>, vector<void (SeriesController::*)()>, SeriesController*);