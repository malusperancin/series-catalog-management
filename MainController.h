#include <iostream>
#include <vector>
#include "AbstractSeriesDAO.h"
#include "ServerDBConnection.h"
using namespace std;

class MainController{
private:
    AbstractSeriesDAO* seriesDAO;
    ServerDBConnection* serverDbConnection;
public:
	void start();
    template<typename ControllerClass>
	static void launchActions(string title, vector<string> menuItens, vector<void (ControllerClass::*)()> functions, ControllerClass* controller);
    void launchSeriesMenu();
    void launchReportsMenu();
    void actionHelp();
    void actionCredits();

    void actionToDo();
};