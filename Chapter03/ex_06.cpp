#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string s("hello");
	for (auto &c : s) {
		c = 'X';
	}
	cout << s;
}