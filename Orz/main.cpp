#include"FuckString.h"
#include<iostream>

int main(){
	FuckString strOper;
	string str("a,bdsfd,csdfd");
	vector<string> strVec = strOper.split(str, ",");
	for (auto s : strVec)
		cout << s;
	getchar();
}