#include<iostream>
#include<vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
	vector<int> vec{ 1, 2, 3, 4, 5 };
	fill_n(vec.begin(), vec.size(), 0);
	fill_n(back_inserter(vec), 10, 1);
	for (auto i : vec)
		cout << i << "\t";
}