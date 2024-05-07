#include "Controller.h"
#include "Menu.h"

void Controller::start() {
	vector<string> menuItens
		{ "Teste1", "Test2", "Sair"};
	vector<void (Controller::*)()> functions
		{ &Controller::teste, &Controller::teste };
	launchActions("Main Menu", menuItens, functions);
}

void Controller::launchActions(string title, vector<string> menuItens, vector<void (Controller::*)()> functions) {
    try
		{
		Menu menu(menuItens, title, "Your option: ");
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

void Controller::teste() {
	cout << "Ola colegas" << endl;
}

