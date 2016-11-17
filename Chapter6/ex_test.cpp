#include <iostream>
#include <string>
using namespace std;

void func(const int &a) {
	cout << 3;
}

void func(int &a) {
	cout << 1;
}

int main() {
	int x;
	const int z = 1;
	func(x);
	func(z);
	bool boo = false;
	cout << boo;
	const int a = 1;
	int b = 2;
	const int *p = &a;
	const int *pb = &b;
	p = pb;
	// ! *p=2
	cout << *p;

	const int &r = b;
	b = 3;
	cout << b;

	int *const cp = &b;
	const constexpr int co = 1;
	constexpr const int coo = 1;
	constexpr int c = 2;
	int d = 1;
	string s = "hi";
	string s1(s);
	string s2{ s };
	string s3 = s;
	string s4 = (s);
	string s5 = { s };
	string s6 = (10, "hi");
	cout << s << s1 << s2 << s3 << s4 << s5 << endl;
	cout << ("a" > "A");
}