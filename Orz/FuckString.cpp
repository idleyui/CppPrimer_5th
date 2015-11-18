/************************************
definition of class FuckString
2015/11/18	Leelddd
************************************/

#include"FuckString.h"

vector<string> FuckString::split(const string &str, const string &separator){
	vector<string> strVec;
	string::size_type begin = 0, end = 0;
	while ((end = str.find(separator, begin)) != string::npos){
		strVec.push_back(str.substr(begin, end-begin));
		begin = ++end;
	}
	strVec.push_back(str.substr(begin));
	return strVec;
}