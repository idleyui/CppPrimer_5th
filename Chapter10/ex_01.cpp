#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	vector<int> intVec{ 0, 2, 3, 4, 5, 3, 4, 2, 1, 3, 4, 2, 4 };
	cout << count(intVec.begin(), intVec.end(), 2);
	vector<string> strs{ "hi", "hello", "hi", "hi" };
	cout << count(strs.cbegin(), strs.cend(), "hi");
	cout << count(strs.cbegin(), strs.cend(), "hello");
}