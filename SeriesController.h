//
// Created by felipe on 5/20/24.
//

#ifndef PROJETOPOO_SERIESCONTROLLER_H
#define PROJETOPOO_SERIESCONTROLLER_H

#include "AbstractSeriesDAO.h"

class SeriesController {
private:
    AbstractSeriesDAO* seriesDAO;
public:
    SeriesController(AbstractSeriesDAO* seriesDAO);
    virtual ~SeriesController();
    void launchSeriesActions(string title, vector<string> menuItens, vector<void (SeriesController::*)()> functions);
    void actionAddSeries();
    void actionDisplaySeries();
};


#endif //PROJETOPOO_SERIESCONTROLLER_H
