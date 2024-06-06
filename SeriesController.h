//
// Created by felipe on 5/20/24.
//

#ifndef PROJETOPOO_SERIESCONTROLLER_H
#define PROJETOPOO_SERIESCONTROLLER_H

#include "AbstractSeriesDAO.h"

class SeriesController {
private:
    AbstractSeriesDAO* seriesDAO;
    int selectSeries(vector<Series*> series);
    void editAttribute(string attribute, void (Series::*setter)(int), Series* series);
    void editAttribute(string attribute, void (Series::*setter)(string), Series* series);
    void actionAddSeries();
    void actionSearchSeriesByName();
    void actionDisplaySeries();
    void actionUpdateSeries();
    void actionDeleteSeries();
public:
    SeriesController(AbstractSeriesDAO* seriesDAO);
    virtual ~SeriesController();
    void start();
};


#endif //PROJETOPOO_SERIESCONTROLLER_H
