#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int> intVec){
	static int count = 0;
	cout << intVec[count];
	++count;
	if (count < intVec.size())
		printVector(intVec);
}

//int main(){
//	vector<int> intVec = { 1, 2, 3 };
//	printVector(intVec);
//	getchar();
//}