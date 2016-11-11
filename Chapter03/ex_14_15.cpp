#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string s;
	vector<string> v;
	while (cin >> s)
		v.push_back(s);
	for (auto s: v)
	{
		cout << s;
	}
}