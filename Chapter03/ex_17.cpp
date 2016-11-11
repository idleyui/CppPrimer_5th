#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<string> v;
	string buf;
	while (cin >> buf) {
		v.push_back(buf);
	}

	for (auto &s: v)
	{
		for (auto &c: s)
		{
			c = toupper(c);
		}
	}

	for (auto &s: v)
	{
		cout << s << endl;
	}
}