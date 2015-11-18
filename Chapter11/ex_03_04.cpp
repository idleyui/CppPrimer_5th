#include<fstream>
#include<iostream>
#include<string>
#include<iterator>
#include<map>
#include<set>
using namespace std;

string cutString(string str){
	set<char> cutSet{ ',', '.','\'' };
	auto iter = str.begin();
	while (iter != str.end()){
		tolower(*iter);
		if (cutSet.find(*iter) != cutSet.end())
			iter = str.erase(iter);
		else
			iter++;
	}
	return str;
}

void countWordsNum(string file){
	ifstream ifs(file);
	istream_iterator<string> iter(ifs);
	istream_iterator<string> eof;
	map<string, int> dic;
	while (iter != eof){
		dic[cutString(*iter++)]++;
	}
	
	for (const auto &i : dic){
		cout << i.first << " occurs " << i.second << " times." << endl;
	}
	
}

//int main(){
//	countWordsNum("test_03.txt");
//	getchar();
//}