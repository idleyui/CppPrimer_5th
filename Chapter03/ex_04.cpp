#include <iostream>
#include <string>
using namespace std;

void readAndComp() {
	string s1, s2;
	cin >> s1 >> s2;
	string s = s1 > s2 ? s1 : s2;
	cout << s << " is bigger" << endl;
}

void readAndLong() {
	string s1, s2;
	cin >> s1 >> s2;
	string s = s1.length() > s2.length() ? s1 : s2;
	cout << s << " is longer" << endl;
}

int main() {
	readAndComp();
	readAndLong();
}