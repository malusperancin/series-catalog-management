#include <iostream>
#include <vector>
#include "AbstractSeriesDAO.h"
#include "ServerDBConnection.h"
#include "MemoryDBConnection.h"
using namespace std;

class MainController{
private:
    AbstractSeriesDAO* seriesDAO;
    ServerDBConnection* serverDbConnection;
    MemoryDBConnection* memoryDbConnection;
    void launchSeriesMenu();
    void launchReportsMenu();
    void actionHelp();
    void actionCredits();
    void actionToDo();
public:
    MainController();
    virtual ~MainController();

    void start();
    template<typename ControllerClass>
	static void launchActions(string title, vector<string> menuItens, vector<void (ControllerClass::*)()> functions, ControllerClass* controller);

};