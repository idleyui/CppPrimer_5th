#include<vector>
#include<iostream>
using namespace std;

vector<int>::const_iterator find(vector<int>::const_iterator begin,
	vector<int>::const_iterator end, int value){
	while (begin != end && *begin++ != value);
	return begin;
}

int main() {
	vector<int> intvec{ 0, 1, 2, 3 };
	cout << (find(intvec.cbegin(), intvec.cend(), 2) == intvec.cend() ? "not found" : "found");
	cout << (find(intvec.cbegin(), intvec.cend(), 4) == intvec.cend() ? "not found" : "found");
}