#include<iostream>
#include <typeinfo>
#include <functional>
using namespace std;

int main() {
	int a = 2;
	std::function<bool(int &)> f;
	f = [&f](int &a)->bool {
		if (a > 0) {
			f(--a);
			return false;
		}
		else
			return true;
	};
	cout << f(a) << endl;
	cout << a;
}