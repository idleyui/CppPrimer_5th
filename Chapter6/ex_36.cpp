#include<iostream>
#include<string>
using namespace std;

string (&retStrings(string (&strArr)[10]))[10]{
	return strArr;
}

//int main(){
//	string strArr[10];
//	for (int i = 0; i < 10; i++){
//		strArr[i] = "a";
//	}
//	retStrings(strArr)[0] = "hi";
//	for (int i = 0; i < 10; i++){
//		cout << strArr[i];
//	}
//	getchar();
//}