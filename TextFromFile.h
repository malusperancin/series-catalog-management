//
// Created by felipe on 5/20/24.
//

#ifndef PROJETOPOO_TEXTFROMFILE_H
#define PROJETOPOO_TEXTFROMFILE_H

#include <iostream>
using namespace std;

class TextFromFile {
private:
    string fileName;
    string fileContent;

public:
    TextFromFile(string fileName);
    virtual ~TextFromFile();
    string& getFileContent();
    string& getFileName();
};


#endif //PROJETOPOO_TEXTFROMFILE_H
