#include "Series.h"

Series::Series(int id, string name, int releaseYear, int numSeasons, int episodeCount, string mainActors, string mainCharacters, string network, int rating) {
	this->id = id;
	this->name = name;
	this->releaseYear = releaseYear;
	this->numSeasons = numSeasons;
	this->episodeCount = episodeCount;
	this->mainActors = mainActors;
	this->mainCharacters = mainCharacters;
	this->network = network;
	this->rating = rating;
}

Series::Series(const string &name, int releaseYear, int numSeasons, int episodeCount, const string &mainActors,
               const string &mainCharacters, const string &network, int rating) : name(name), releaseYear(releaseYear),
                                                                                  numSeasons(numSeasons),
                                                                                  episodeCount(episodeCount),
                                                                                  mainActors(mainActors),
                                                                                  mainCharacters(mainCharacters),
                                                                                  network(network), rating(rating) {}

Series::~Series() {
	// Destructor
}

string Series::getName() {
	return this->name;
}

int Series::getId() {
	return this->id;
}

int Series::getReleaseYear() {
	return this->releaseYear;
}

int Series::getNumSeasons() {
	return this->numSeasons;
}

int Series::getEpisodeCount() {
	return this->episodeCount;
}

string Series::getMainActors() {
	return this->mainActors;
}

string Series::getMainCharacters() {
	return this->mainCharacters;
}

string Series::getNetwork() {
	return this->network;
}

int Series::getRating() {
	return this->rating;
}

void Series::setName(string name) {
	this->name = name;
}

void Series::setId(int id) {
	this->id = id;
}

void Series::setReleaseYear(int year) {
	this->releaseYear = year;
}

void Series::setNumSeasons(int numSeasons) {
	this->numSeasons = numSeasons;
}

void Series::setEpisodeCount(int episodeCount) {
	this->episodeCount = episodeCount;
}

void Series::setMainActors(string mainActors) {
	this->mainActors = mainActors;
}

void Series::setMainCharacters(string mainCharacters) {
	this->mainCharacters = mainCharacters;
}

void Series::setNetwork(string network) {
	this->network = network;
}

void Series::setRating(int rating) {
	this->rating = rating;
}

ostream &operator<<(ostream &os, const Series &series) {
    os << series.name << " (" << series.numSeasons << " temporadas - " << series.episodeCount << " episodios)\t";
    os << series.network << "\t" << series.releaseYear << "\t" << series.rating << "/10" << endl;
    os << "Personagens principais: " << series.mainCharacters << endl;
    os << "Atores principais: " << series.mainActors << endl;

    return os;
}

