//
// Created by felipe on 5/27/24.
//

#ifndef PROJETOPOO_REPORTSCONTROLLER_H
#define PROJETOPOO_REPORTSCONTROLLER_H

#include "AbstractSeriesDAO.h"

class ReportsController {
private:
    AbstractSeriesDAO* seriesDAO;
    void actionReportByTitle();
    void actionReportByNetwork();
    void actionReportByYear();
    void actionReportByRating();
public:
    ReportsController(AbstractSeriesDAO* seriesDAO);
    virtual ~ReportsController();
    void start();
};


#endif //PROJETOPOO_REPORTSCONTROLLER_H
