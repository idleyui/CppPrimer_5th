#include<string>
#include<list>
#include<iostream>
using namespace std;


void putStringToList(string &str){
	list<char> charList;
	for (auto &c : str){
		charList.push_back(c);
	}
	for (auto &c : charList){
		cout << c << endl;
	}
}
//
//int main(){
//	char buf2;
//	string listStr;
//	while (cin >> buf2){
//		listStr.push_back(buf2);
//	}
//	putStringToList(listStr);
//}