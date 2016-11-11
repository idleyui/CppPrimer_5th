#include <iostream>
#include <string>
using namespace std;

void getlines() {
	string s;
	while (getline(cin, s)) {
		cout << s;
	}
}

void getwords() {
	string s;
	while (cin >> s) {
		cout << s;
	}
}

int main() {
	//getlines();
	getwords();
}