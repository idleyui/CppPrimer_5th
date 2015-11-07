#include<iostream>
#include<string>
using namespace std;
using strArrT = string[10];
string strArr[10];

strArrT &retStringsName(strArrT &strArr){
	return strArr;
}

auto retStringTrail(string (&strArr)[10])->string(&)[10]{
	return strArr;
}

decltype(strArr) &retStringDec(string(&strArr)[10]){
	return strArr;
}

//int main(){
//	for (int i = 0; i < 10; i++){
//		strArr[i] = "a";
//	}
//	retStringsName(strArr)[0] = "hi";
//	retStringTrail(strArr)[1] = "b";
//	retStringDec(strArr)[2] = "c";
//	for (int i = 0; i < 10; i++){
//		cout << strArr[i];
//	}
//	getchar();
//}