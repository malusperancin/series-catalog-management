#include <iostream>
#include <vector>
using namespace std;

class Controller{
public:
	void start();
	void launchActions(string title, vector<string> menuItens, vector<void (Controller::*)()> functions);
	void teste();
};
