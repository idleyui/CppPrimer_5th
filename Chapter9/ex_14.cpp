#include<vector>
#include<list>
#include<iostream>
using namespace std;

void putListToVec(vector<string> &strVec, list<char *> &charList){
	strVec.assign(charList.begin(), charList.end());
}