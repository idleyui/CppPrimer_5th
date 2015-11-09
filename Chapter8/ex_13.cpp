#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;

struct PersonInfo{
	string name;
	vector<string> phones;
};

//int main(){
//	ifstream ifs("D:\\test\\peopleInfo.txt");
//	if (!ifs){
//		cout << "fail to open the file";
//	}
//	string line, word;
//	vector<PersonInfo> people;
//	while (getline(ifs, line)){
//		PersonInfo info;
//		istringstream record(line);
//		record >> info.name;
//		while (record >> word)
//			info.phones.push_back(word);
//		people.push_back(info);
//	}
//}