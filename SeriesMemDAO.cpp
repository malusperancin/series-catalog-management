#include "SeriesMemDAO.h"

int SeriesMemDAO::lastSeriesId = 0;

SeriesMemDAO::SeriesMemDAO(MemoryDBConnection *memoryDBConnection) :
		memoryDBConnection(memoryDBConnection)
	{
	}

SeriesMemDAO::~SeriesMemDAO()
	{
	// TODO Auto-generated destructor stub
	}

vector<Series*> SeriesMemDAO::getAllSeries()
	{
	return (memoryDBConnection->getSeriesList());
	}

Series* SeriesMemDAO::getSeriesById(int seriesId)
	{
	vector<Series*> &series = memoryDBConnection->getSeriesList();
	vector<Series*>::iterator seriesIterator = series.begin();
	Series *buffer = NULL;
	bool found = false;

	while ((!found) && (seriesIterator != series.end()))
		{
		if ((*seriesIterator)->getId() == seriesId)
			{
			found = true;
			buffer = *seriesIterator;
			}
		seriesIterator++;
		}

	return (buffer);
	}

vector<Series*>* SeriesMemDAO::getSeriesByName(string name)
	{
	vector<Series*> &series = memoryDBConnection->getSeriesList();
	vector<Series*>::iterator seriesIterator = series.begin();
	vector<Series*> *buffer = NULL;
	bool found = false;

	while ((!found) && (seriesIterator != series.end()))
		{
		if ((*seriesIterator)->getName() == name)
			{
			found = true;
			buffer->push_back(*seriesIterator);
			}
		seriesIterator++;
		}

	return (buffer);
	}

void SeriesMemDAO::addSeries(Series *series)
	{
	series->setId(++lastSeriesId);
	(memoryDBConnection->getSeriesList()).push_back(series);
	}

void SeriesMemDAO::updateSeries(Series *series)
	{
	deleteSeries(series->getId());
	addSeries(series);
	}

void SeriesMemDAO::deleteSeries(int seriesId)
	{
	vector<Series*> &series = memoryDBConnection->getSeriesList();
	vector<Series*>::iterator seriesIterator = series.begin();
	bool found = false;

	while ((!found) && (seriesIterator != series.end()))
		{
		if ((*seriesIterator)->getId() == seriesId)
			{
			found = true;
			delete *seriesIterator;
			series.erase(seriesIterator);
			}
		seriesIterator++;
		}
	}
