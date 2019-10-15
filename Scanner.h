#ifndef SCANNER_H_
#define SCANNER_H_
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include "Token.h"

using namespace std;

class Scanner {
public:
	Scanner(ifstream& filename) : line(1), input(filename) {}
	void tokenize();
	void findID();
	void findString();
	void findComment();
	void printTokens();
	vector<Token> getTokens();
private:
	string file;
	int line;
	vector<Token> tokens;
	char currentChar;
	char nextChar;
	ifstream& input;
};

#endif
