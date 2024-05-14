#include "MemoryDBConnection.h"

using namespace std;

MemoryDBConnection::MemoryDBConnection()
	{
	seriesDB = vector<Series*>();
	}

MemoryDBConnection::~MemoryDBConnection()
	{
	close();
	}

vector<Series*>& MemoryDBConnection::getSeriesList()
	{
	return seriesDB;
	}

void MemoryDBConnection::close()
	{
	for (Series *buffer : seriesDB)
		{
		delete buffer;
		buffer = NULL;
		}
	seriesDB.clear();
	}

