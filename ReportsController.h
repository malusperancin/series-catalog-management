//
// Created by felipe on 5/27/24.
//

#ifndef PROJETOPOO_REPORTSCONTROLLER_H
#define PROJETOPOO_REPORTSCONTROLLER_H

#include "AbstractSeriesDAO.h"

class ReportsController {
private:
    AbstractSeriesDAO* seriesDAO;
public:
    ReportsController(AbstractSeriesDAO* seriesDAO);
    virtual ~ReportsController();
    void start();
    void actionReportByTitle();
    void actionReportByNetwork();
    void reportByYear();
    void reportByRating();
};


#endif //PROJETOPOO_REPORTSCONTROLLER_H
