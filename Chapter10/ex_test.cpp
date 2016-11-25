#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool isShorter(const string &s1, const string &s2) {
	return s1.size() < s2.size();
}

int a() {
	return 1;
}

int aa() {
	return 2;
}

int b(int(*a)()) {
	a = aa;
	cout << (*a)();
	return 1;
}

int d() {
	int a = 1;
	auto l1 = [=]() mutable {
		auto l2 = []() {	return 1; };
		a++;
		cout << "a = " << a << endl;
		int b = a+l2();
		if (a == 2)
			return a;
		return a+1;
	};
	cout << l1();
	cout << a;
	return 1;
}

int create(int a) {
	cout << "ok";
	cout << "create a = " << a;
	return 1;
}

int main() {
	vector<string> strs{ "baa", "aa", "a" };
	sort(strs.begin(), strs.end(), isShorter);
	for (auto s : strs)
		cout << s << " ";
	cout << endl;
	b(a);

	d();

	create(int(1));
}
