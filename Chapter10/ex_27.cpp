#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main(){
	vector<int> vec{ 1, 2, 2, 3, 3, 4 };
	list<int> list;
	unique_copy(vec.begin(), vec.end(), back_inserter(list));
	for (auto &i : list)	cout << i << " ";
}
