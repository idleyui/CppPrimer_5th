#include <iostream>
#include <string>
#include <vector>
using namespace std;

void doubleOdd(vector<int> &v) {
	for (auto &i : v)
		if (i % 2 != 0)
			i = i * 2;
}

int main() {
	vector<int> v{ 1,2,3,4 };
	doubleOdd(v);
	for (auto i : v)
		cout << i;
}