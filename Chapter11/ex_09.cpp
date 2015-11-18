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

//int main(){
//	map<string, list<int>> wordsLine;
//	int lineNum = 1;
//	ifstream ifs("test_03.txt");
//	while (!ifs.eof()){
//		string line;
//		getline(ifs, line);
//		vector<string> vec = split(line, " ");
//		for (auto s : vec){
//			wordsLine[s].push_back(lineNum);
//		}
//		++lineNum;
//	}
//
//	for (const auto s : wordsLine){
//		cout << s.first << "\t";
//		for (const auto i : s.second){
//			cout << i << "\t";
//		}
//		cout << endl;
//	}
//
//	getchar();
//}