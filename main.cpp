#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "Parser.h"
#include "Scanner.h"

using namespace std;

int main(int argc, char * argv[]) {

	ifstream input;
	input.open("test_case0.txt"); //change it to argv[1]
	Scanner myScanner(input); //change it to argv[1]
	myScanner.tokenize();
	Parser myParser(myScanner.getTokens());
	myParser.parse();



	return 0;
}