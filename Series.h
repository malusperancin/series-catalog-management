#include <iostream>
#include <vector>
using namespace std;

#ifndef SERIES_H
#define SERIES_H

class Series{
private:
	int id;
	string name;
	int releaseYear;
	int numSeasons;
	int episodeCount;
	string mainActors;
	string mainCharacters;
	string network;
	int rating;

public:
    Series(const string &name, int releaseYear, int numSeasons, int episodeCount, const string &mainActors,
           const string &mainCharacters, const string &network, int rating);

    Series(int id, string name, int releaseYear, int numSeasons, int episodeCount, string mainActors, string mainCharacters, string network, int rating);
	~Series();
	string getName();
	int getId();
	int getReleaseYear();
	int getNumSeasons();
	int getEpisodeCount();
	string getMainActors();
	string getMainCharacters();
	string getNetwork();
	int getRating();
	
	void setName(string name);
	void setId(int id);
	void setReleaseYear(int year);
	void setNumSeasons(int numSeasons);
	void setEpisodeCount(int episodeCount);
	void setMainActors(string mainActors);
	void setMainCharacters(string mainCharacters);
	void setNetwork(string network);
	void setRating(int rating);
    friend ostream& operator<<(ostream& os, const Series& series);
};

#endif