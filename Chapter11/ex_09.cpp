#include"Chapter11.h"

//int main(){
//	map<string, list<int>> wordsline;
//	int linenum = 1;
//	ifstream ifs("test_03.txt");
//	while (!ifs.eof()){
//		string line;
//		getline(ifs, line);
//		vector<string> vec = split(line, " ");
//		for (auto s : vec){
//			wordsline[s].push_back(linenum);
//		}
//		++linenum;
//	}
//
//	for (const auto s : wordsline){
//		cout << s.first << "\t";
//		for (const auto i : s.second){
//			cout << i << "\t";
//		}
//		cout << endl;
//	}
//
//	getchar();
//}