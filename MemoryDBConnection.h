#ifndef MEMORYDBCONNECTION_H_
#define MEMORYDBCONNECTION_H_

#include <vector>

#include "Series.h"

using namespace std;

class MemoryDBConnection
	{
	private:
		vector<Series*> seriesDB;

	public:
		MemoryDBConnection();
		virtual ~MemoryDBConnection();

		vector<Series*>& getSeriesList();
		void close();
	};

#endif /* MEMORYDBCONNECTION_H_ */
