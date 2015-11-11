#include<string>
#include<deque>
#include<list>
#include<iostream>
using namespace std;

void putStringToDeque(string &str){
	deque<char> charDeque;
	for (auto &c: str){
		charDeque.push_back(c);
	}
	for (auto &c : charDeque){
		cout << c << endl;
	}
}


//int main(){
//	char buf;
//	string str;
//	while (cin >> buf){
//		str.push_back(buf);
//	}
//	putStringToDeque(str);
//
//	getchar();
//}