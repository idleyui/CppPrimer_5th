#include<fstream>
#include<iostream>
#include<string>
#include<vector>
#include<iterator>
#include<map>
using namespace std;

//int main(){
//
//	map<string, vector<pair<string, string>>> family;
//	while (true){
//		//get family name
//		cout << "please input the family name: ";
//		string familyName;
//		cin.clear();
//		cin >> familyName;
//		//when get the exit, break
//		if (familyName == "exit")
//			break;
//		//get the name and birthday
//		string name;
//		string birth;
//		while (cin >> name){
//			cin >> birth;
//			family[familyName].push_back(make_pair(name, birth));
//		}
//	}
//
//	for (const auto &m : family){
//		cout << m.first << ": " << endl;
//		for (const auto &s : m.second)
//			cout << s.first << "\t" << s.second << endl;
//		cout << endl;
//	}
//	getchar();
//}