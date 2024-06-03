/*
 * SeriesDBDAO.h
 *
 *  Created on: Apr 29, 2024
 *      Author: andre
 */

#ifndef USERDBDAO_H_
#define USERDBDAO_H_

#include "AbstractSeriesDAO.h"
#include "ServerDBConnection.h"

class SeriesDBDAO final : public AbstractSeriesDAO
	{
	private:
		static const string SQL_getAllSeries;
		static const string SQL_getSeriesById;
		static const string SQL_addSeries;
		static const string SQL_updateSeries;
		static const string SQL_deleteSeries;
        static const string SQL_getSeriesByName;
        static const string SQL_getSeriesByNetwork;
        static const string SQL_getSeriesByYear;
        static const string SQL_getSeriesByRating;

		ServerDBConnection *serverDBConnection;


	public:
		SeriesDBDAO(ServerDBConnection *serverDBConnection);
		virtual ~SeriesDBDAO();

		virtual vector<Series*> getAllSeries();
		virtual void addSeries(Series *Series);
		virtual void deleteSeries(int SeriesId);
		virtual void updateSeries(Series *Series);
		virtual Series* getSeriesById(int SeriesId);
        virtual vector<Series*> getSeriesByName(string name);
        virtual vector<Series*> getSeriesByNetwork(string network);
        virtual vector<Series*> getSeriesByYear(int year);
        virtual vector<Series*> getSeriesByRating(int rating);
	};

#endif /* USERDBDAO_H_ */
