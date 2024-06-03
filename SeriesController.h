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
public:
    SeriesController(AbstractSeriesDAO* seriesDAO);
    virtual ~SeriesController();
    void start();
    void actionAddSeries();
    void actionSearchSeriesByName();
    void actionDisplaySeries();
    void actionUpdateSeries();
    void actionDeleteSeries();
};


#endif //PROJETOPOO_SERIESCONTROLLER_H
