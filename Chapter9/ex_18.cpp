#include<string>
#include<deque>
#include<list>
#include<iostream>
using namespace std;

int main() {
	deque<string> que;
	string buf;
	while (cin >> buf) {
		que.push_back(buf);
	}
	for (auto item = que.cbegin(); item != que.cend(); item++)
		cout << *item << " ";
	cout << endl;
}