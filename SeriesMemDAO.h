/*
 * SeriesMemDAo.h
 *
 *  Created on: Mar 22, 2024
 *      Author: andre
 */

#ifndef USERMEMDAO_H_
#define USERMEMDAO_H_

#include "AbstractSeriesDAO.h"
#include "MemoryDBConnection.h"

class SeriesMemDAO final : public AbstractSeriesDAO
	{
	private:
		MemoryDBConnection* memoryDBConnection;
		static int lastSeriesId;

	public:
		SeriesMemDAO(MemoryDBConnection* memoryDBConnection);
		virtual ~SeriesMemDAO();

        virtual vector<Series*> getAllSeries();
		virtual void addSeries(Series *Series);
		virtual void deleteSeries(int SeriesId);
		virtual void updateSeries(Series *Series);
		virtual Series* getSeriesById(int SeriesId);
		virtual vector<Series*> getSeriesByName(string name);
	};

#endif /* USERMEMDAO_H_ */
