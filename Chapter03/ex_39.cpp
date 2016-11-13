#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool cmpstr(const string &s1, const string &s2) {
	return s1 == s2;
}

bool comcstr(char *s1, char *s2) {
	return strcmp(s1, s2)==0;
}

int main() {
	cout << cmpstr("a", "a");
	cout << ("a" == "a");
	cout << comcstr("a", "a");
}