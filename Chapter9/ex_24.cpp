#include<vector>
#include<iostream>
using namespace std;

int main() {
	vector<int> intVec{ 1, 2, 3 };
	cout << intVec[0] << endl
		<< intVec.at(0) << endl
		<< intVec.front() << endl
		<< *intVec.begin() << endl
		<< intVec.back() << endl;

	cout << *intVec.erase(intVec.begin(), ++intVec.begin());
	for (auto &i : intVec) {
		cout << i;
	}
}