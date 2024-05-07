#include "Series.h"

Series::Series(string name, int releaseYear, int numSeasons, vector<string> mainActors, vector<string> mainCharacters, string streaming, int score) {
	this->name = name;
	this->releaseYear = releaseYear;
	this->numSeasons = numSeasons;
	this->mainActors = mainActors;
	this->mainCharacters = mainCharacters;
	this->streaming = streaming;
	this->score = score;
}

Series::~Series() {
	// Destructor
}

string Series::getName() {
	return this->name;
}

int Series::getReleaseYear() {
	return this->releaseYear;
}

int Series::getNumSeasons() {
	return this->numSeasons;
}

vector<string> Series::getMainActors() {
	return this->mainActors;
}

vector<string> Series::getMainCharacters() {
	return this->mainCharacters;
}

string Series::getStreaming() {
	return this->streaming;
}

int Series::getScore() {
	return this->score;
}

void Series::setName(string name) {
	this->name = name;
}

void Series::setReleaseYear(int year) {
	this->releaseYear = year;
}

void Series::setNumSeasons(int numSeasons) {
	this->numSeasons = numSeasons;
}

void Series::setMainActors(vector<string> mainActors) {
	this->mainActors = mainActors;
}

void Series::setMainCharacters(vector<string> mainCharacters) {
	this->mainCharacters = mainCharacters;
}

void Series::setStreaming(string streaming) {
	this->streaming = streaming;
}

void Series::setScore(int score) {
	this->score = score;
}

void Series::teste(){
	cout << "Ola amiguinho" << endl;
}
