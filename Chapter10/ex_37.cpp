#include<iostream>
#include<iterator>
#include<vector>
#include<list>
using namespace std;

int main() {
	vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int startPos = 3, endPos = 7;
	list<int> list;
	copy(vec.crbegin() + vec.size() - endPos, vec.crend() - startPos + 1, back_inserter(list));
	for (auto i : list)
		cout << i << "\t";
	cout << endl;
}