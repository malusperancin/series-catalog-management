#include <iostream>
#include <vector>
using namespace std;

class Series{
private:
	string name;
	int releaseYear;
	int numSeasons;
	vector<string> mainActors;
	vector<string> mainCharacters;
	string streaming;
	int score;

public:
	Series(string name, int releaseYear, int numSeasons, vector<string> mainActors, vector<string> mainCharacters, string streaming, int score);
	~Series();
	string getName();
	int getReleaseYear();
	int getNumSeasons();
	vector<string> getMainActors();
	vector<string> getMainCharacters();
	string getStreaming();
	int getScore();
	
	void setName(string name);
	void setReleaseYear(int year);
	void setNumSeasons(int numSeasons);
	void setMainActors(vector<string> mainActors);
	void setMainCharacters(vector<string> mainCharacters);
	void setStreaming(string streaming);
	void setScore(int score);
	
	void teste();
};
