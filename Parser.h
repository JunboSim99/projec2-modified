#ifndef PARSE_H_
#define PARSER_H_
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include <exception>
#include "Token.h"
#include "datalogProgram.h"
#include "Predicate.h"
#include "Rule.h"
#include "Scanner.h"


using namespace std;

class Parser {

public:
	Parser(vector<Token> mytokens) : tokens(mytokens) {
		p = Predicate();
		r = Rule();
		dp = datalogProgram();
	}

	void parse();
	void match(TokenType type);
	void parseDatalog();
	void parseScheme();
	void parseSchemeList();
	void parseFact();
	void parseFactList();
	void parseRule();
	void parseRuleList();
	void parseQuery();
	void parseQueryList();
	void parseIDList();
	void parseStringList();
	void parsePredicate();
	void parseHeadPredicate();
	void parsePredicateList();
	string parseParameter();
	void parseParameterList();
	string parseExpression();
	string parseOperator();

private:
	//ifstream& input;
	vector<Token> tokens;
	size_t index = 0;

	Predicate p;
	datalogProgram dp;
	Rule r;
	vector <string> domain;
	
};

#endif
