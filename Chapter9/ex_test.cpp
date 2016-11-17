#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct A {
	int a;
	A(int a) :a(a) {}
};

int main() {
	vector<int> vi{ 1,2,3 };
	vector<double> b(vi.begin(), vi.end());
	for (auto i : b)
		cout << endl << i;
	cout << vi.back();
}