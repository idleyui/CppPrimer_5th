#include<vector>
#include<iostream>
using namespace std;

bool vectorEqu(vector<int> &intVec1, vector<int> &intVec2){
	return intVec1 == intVec2;
}

bool vectorBigger(vector<int> &intVec1, vector<int> &intVec2){
	return intVec1 > intVec2;
}

bool vectorIndexEqu(vector<int> &intVec1, int index1, vector<int> &intVec2, int index2){
	if (index1 < intVec1.size() && index2 < intVec2.size()){
		if (intVec1[index1] == intVec2[index2])
			return true;
		return false;
	}
	return false;
}

int main(){
	vector<int> intVec1{ 1, 2, 3 };
	vector<int> intVec2{ 1, 2, 3 };
	vector<int> intVec3{ 1 };
	cout << vectorEqu(intVec1, intVec2);
	cout << vectorBigger(intVec1, intVec3);
	getchar();
}
