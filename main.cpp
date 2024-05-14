#include <iostream>
#include "SeriesDBDAO.h"
#include "ServerDBConnection.h"

using namespace std;

int main(){
    ServerDBConnection* serverDbConnection = new ServerDBConnection();
    SeriesDBDAO *seriesDAO = new SeriesDBDAO(serverDbConnection);
    seriesDAO->addSeries(new Series(1, "The Office", 2005, 9, 300, "Jenna Fischer", "Pam", "Prime Video", 10));
    vector<Series*> series = seriesDAO->getAllSeries();
    cout << series[0]->getName() << endl;
    return 0;
}