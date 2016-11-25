#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(){
	vector<double> intVec{ 0, 1, 2, 3, 4, 5, 6.1 };
	cout << accumulate(intVec.cbegin(), intVec.cend(), 0.0) << endl;
	cout << accumulate(intVec.cbegin(), intVec.cend(), 0) << endl;
	cout << accumulate(intVec.cbegin(), intVec.cend(), 1) << endl;
}