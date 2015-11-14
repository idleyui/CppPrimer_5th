#include<iostream>
#include<string>
using namespace std;

string addBeginEnd(string str, string &beginStr, string &endStr){
	auto iter = str.begin();
	str.insert(iter, beginStr.begin(), beginStr.end());
	str.insert(str.end(), endStr.begin(), endStr.end());
	return str;
}

string addBeginEndIndex(string &str, string &beginStr, string &endStr){
	str.insert(0, beginStr);
	str.insert(str.size(), endStr);
	return str;
}

//int main(){
//	string str("lee");
//	string begin("ms.");
//	string end("47");
//	cout << addBeginEnd(str, begin, end) << endl;
//	cout << addBeginEndIndex(str, begin, end) << endl;
//	getchar();
//}