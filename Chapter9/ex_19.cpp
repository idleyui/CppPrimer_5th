#include<string>
#include<list>
#include<iostream>
using namespace std;

int main() {
	string buf;
	list<string> l;
	while (cin >> buf) {
		l.push_back(buf);
	}

	for (auto item = l.cbegin(); item != l.cend(); item++)
		cout << *item << " ";
	cout << endl;
}