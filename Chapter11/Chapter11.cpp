#include"Chapter11.h"

vector<string> split(const string &str, const string &separator){
	vector<string> strVec;
	string::size_type begin = 0, end = 0;
	while ((end = str.find(separator, begin)) != string::npos){
		strVec.push_back(str.substr(begin, end - begin));
		begin = ++end;
	}
	strVec.push_back(str.substr(begin));
	return strVec;
}