#include<iostream>
#include<vector>
using namespace std;

extern int sum(int a, int b);

int sub(int a, int b){
	return a - b;
}

int mult(int a, int b){
	return a*b;
}

int divi(int a, int b){
	return a / b;
}

int main(){
	vector<int(*)(int a, int b)> pointVec;
	vector<decltype(sum)*> pointVector;
	int(*psum)(int a, int b) = sum;
	decltype(sub)*psub = sub;
	pointVec.push_back(psum);
	pointVec.push_back(psub);
	cout << pointVec[0](1, 2);
	getchar();
}