#include <iostream>
#include <vector>
#include "SeriesDBDAO.h"

using namespace std;

const string SeriesDBDAO::SQL_getAllSeries = "select * from Series order by series_name";
const string SeriesDBDAO::SQL_getSeriesById = "select * from Series where internal_id = ?";
const string SeriesDBDAO::SQL_addSeries = "insert into Series (internal_id, series_name, release_year, season, episode_count, main_actors, main_characters, network, rating) values (?,?,?,?,?,?,?,?,?)";
const string SeriesDBDAO::SQL_updateSeries = "update Series set series_name = ?, release_year = ?, season = ? , episode_count = ?, main_actors = ?, main_characters = ?, network = ?, rating = ? where internal_id = ?";
const string SeriesDBDAO::SQL_deleteSeries = "delete from Series where internal_id = ?";
const string SeriesDBDAO::SQL_getSeriesByName = "select * from Series where series_name = ?";


SeriesDBDAO::SeriesDBDAO(ServerDBConnection *serverDBConnection) :
		serverDBConnection(serverDBConnection)
	{
	}

SeriesDBDAO::~SeriesDBDAO()
	{
	}

vector<Series*> SeriesDBDAO::getAllSeries()
	{
	vector<Series*> seriesDB;
	try
		{
		unique_ptr<sql::Statement> stmnt(serverDBConnection->getConnection()->createStatement());
		sql::ResultSet *res = stmnt->executeQuery(SQL_getAllSeries);

		while (res->next())
			{
			int seriesId = res->getInt(1);
			string seriesName = (res->getString(2)).c_str();
            int releaseYear = res->getInt(3);
            int season = res->getInt(4);
            int episodeCount = res->getInt(5);
			string mainActors = (res->getString(6)).c_str();
			string mainCharacters = (res->getString(7)).c_str();
			string network = (res->getString(8)).c_str();
            int rating = res->getInt(9);


			Series *buffer = new Series(seriesId, seriesName, releaseYear, season, episodeCount, mainActors, mainCharacters, network, rating);
			seriesDB.push_back(buffer);
			}
		}
	catch (sql::SQLException &e)
		{
		cerr << "Error selecting Series: " << e.what() << endl;
		}
	return (seriesDB);
	}

Series* SeriesDBDAO::getSeriesById(int seriesId)
	{
	Series *buffer = NULL;
	try
		{
		unique_ptr<sql::PreparedStatement> stmnt(serverDBConnection->getConnection()->prepareStatement(SQL_getSeriesById));
		stmnt->setInt(1, seriesId);
		sql::ResultSet *res = stmnt->executeQuery();

		if (res->next())
			{
			int seriesId = res->getInt(1);
			string seriesName = (res->getString(2)).c_str();
            int releaseYear = res->getInt(3);
            int season = res->getInt(4);
            int episodeCount = res->getInt(5);
			string mainActors = (res->getString(6)).c_str();
			string mainCharacters = (res->getString(7)).c_str();
			string network = (res->getString(8)).c_str();
            int rating = res->getInt(9);

			buffer = new Series(seriesId, seriesName, releaseYear, season, episodeCount, mainActors, mainCharacters, network, rating);
			}
		}
	catch (sql::SQLException &e)
		{
		cerr << "Error selecting Series: " << e.what() << endl;
		}
	return (buffer);
	}

void SeriesDBDAO::addSeries(Series *series)
	{
	try
		{
		unique_ptr<sql::PreparedStatement> stmnt(serverDBConnection->getConnection()->prepareStatement(SQL_addSeries));
		stmnt->setInt(1, series->getId());
		stmnt->setString(2, series->getName());
        stmnt->setInt(3, series->getReleaseYear());
		stmnt->setInt(4, series->getNumSeasons());
		stmnt->setInt(5, series->getEpisodeCount());
        stmnt->setString(6, series->getMainActors());
        stmnt->setString(7, series->getMainCharacters());
        stmnt->setString(8, series->getNetwork());
        stmnt->setInt(9, series->getRating());

		stmnt->executeQuery();
		}
	catch (sql::SQLException &e)
		{
		cerr << "Error inserting new Series: " << e.what() << endl;
		}
	}

void SeriesDBDAO::updateSeries(Series *series)
	{
	try
		{
		unique_ptr<sql::PreparedStatement> stmnt(serverDBConnection->getConnection()->prepareStatement(SQL_updateSeries));
		stmnt->setInt(1, series->getId());
		stmnt->setString(2, series->getName());
        stmnt->setInt(3, series->getReleaseYear());
		stmnt->setInt(4, series->getNumSeasons());
		stmnt->setInt(5, series->getEpisodeCount());
        stmnt->setString(6, series->getMainActors());
        stmnt->setString(7, series->getMainCharacters());
        stmnt->setString(8, series->getNetwork());
        stmnt->setInt(9, series->getRating());

		stmnt->executeQuery();
		}
	catch (sql::SQLException &e)
		{
		cerr << "Error updating Series: " << e.what() << endl;
		}
	}

void SeriesDBDAO::deleteSeries(int seriesId)
	{
	try
		{
		unique_ptr<sql::PreparedStatement> stmnt(serverDBConnection->getConnection()->prepareStatement(SQL_deleteSeries));
		stmnt->setInt(1, seriesId);
		stmnt->executeQuery();
		}
	catch (sql::SQLException &e)
		{
		cerr << "Error deleting Series: " << e.what() << endl;
		}
	}

    
vector<Series*>* SeriesDBDAO::getSeriesByName(string name)
	{
	vector<Series*> *buffer = NULL;
	try
		{
		unique_ptr<sql::PreparedStatement> stmnt(serverDBConnection->getConnection()->prepareStatement(SQL_getSeriesById));
		stmnt->setString(1, name);
		sql::ResultSet *res = stmnt->executeQuery();

		if (res->next())
			{
			int seriesId = res->getInt(1);
			string seriesName = (res->getString(2)).c_str();
            int releaseYear = res->getInt(3);
            int season = res->getInt(4);
            int episodeCount = res->getInt(5);
			string mainActors = (res->getString(6)).c_str();
			string mainCharacters = (res->getString(7)).c_str();
			string network = (res->getString(8)).c_str();
            int rating = res->getInt(9);

			buffer->push_back(new Series(seriesId, seriesName, releaseYear, season, episodeCount, mainActors, mainCharacters, network, rating));
			}
		}
	catch (sql::SQLException &e)
		{
		cerr << "Error selecting Series: " << e.what() << endl;
		}
	return (buffer);
	}
