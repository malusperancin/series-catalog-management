#ifndef ABSTRACTSeriesDAO_H_
#define ABSTRACTSeriesDAO_H_

#include <vector>
#include "Series.h"
using namespace std;

class AbstractSeriesDAO
	{
	public:
		AbstractSeriesDAO();
		virtual ~AbstractSeriesDAO();

		virtual vector<Series*> getAllSeries() = 0;
		virtual Series* getSeriesById(int SeriesId) = 0;
		virtual void addSeries(Series *Series) = 0;
		virtual void updateSeries(Series *Series) = 0;
		virtual void deleteSeries(int SeriesId) = 0;
        virtual vector<Series*> getSeriesByName(string name) = 0;
	};

#endif /* ABSTRACTSeriesDAO_H_ */
