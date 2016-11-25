#include<fstream>
#include<iostream>
#include<string>
#include<vector>
#include<iterator>
#include<map>
using namespace std;

int main(){

	map<string, vector<pair<string, string>>> family;
	while (true){
		string familyName, name, birth;
		
		cout << "please input the family name: ";
		cin.clear();
		cin >> familyName;
		if (familyName == "exit")	break;

		cout << "please input the name and birth: ";
		while (cin >> name){
			cin >> birth;
			family[familyName].push_back(make_pair(name, birth));
		}
	}

	for (const auto &m : family){
		cout << m.first << ": " << endl;
		for (const auto &s : m.second)
			cout << s.first << "\t" << s.second << endl;
		cout << endl;
	}
}