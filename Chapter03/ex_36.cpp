#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isEqual(vector<int> va, vector<int> vb) {
	if (va.size() != vb.size())	return false;
	auto aitem = va.begin(), bitem = vb.begin();
	while (aitem != va.end() && bitem!=vb.end()) {
		if (*aitem++ != *bitem++)
			return false;
	}
	return true;
}

bool isEqual(int *a, int *enda, int *b, int *endb) {
	while (a!=enda && b!=endb) {
		cout << 1;
		cout << *a << *b << endl;
		if (*a++ != *b++)
			return false;
	}
	return a==enda && b==endb;
}

int main() {
	int a[5]{ 1,2,3,4,5 };
	int b[5]{ 1,2,3,4,5 };
	vector<int> va{ 1,2,3,4,5 };
	vector<int> vb{ 1,2,3,4,5 };
	cout << isEqual(a, end(a), b, end(b)) << endl;
	cout << isEqual(va, vb) << endl;
}