/***************************************
declaration of class FuckString	-> implement some basic string operate
2015/11/18	Leelddd
*****************************************/
#ifndef FUCKSTRING_H
#define FUCKSTRING_H

#include<vector>
#include<string>
using namespace std;

class FuckString{
public:
	//split the string by separator
	vector<string> split(const string &str, const string &separator);

	
};
#endif