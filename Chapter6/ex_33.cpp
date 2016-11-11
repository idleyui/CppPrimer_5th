#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printVector(vector<int> vec) {
	static int count = 0;

	if (count >= vec.size())
		return;

	cout << vec[count++] << " ";
	printVector(vec);
}

int main() {
	vector<int> intVec = { 1, 2, 3 };
	printVector(intVec);
}