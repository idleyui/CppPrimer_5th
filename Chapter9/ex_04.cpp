#include<vector>
#include<iostream>
using namespace std;

bool find(vector<int>::const_iterator begin, vector<int>::const_iterator end, int value){
	while (begin != end && *begin++ != value);
	return begin != end;
}

int main(){
	vector<int> intVec{ 0, 1, 2, 3 };
	cout << find(intVec.cbegin(), intVec.cend(), 2);
	cout << find(intVec.cbegin(), intVec.cend(), 4);
}