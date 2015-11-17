#include<iostream>
#include<iterator>
#include<vector>
#include<list>
#include<deque>
#include<forward_list>
#include<algorithm>
using namespace std;

//int main(){
//	vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	list<int> list;
//	deque<int> deque;
//	forward_list<int> flist;
//	unique_copy(vec.begin(), vec.end(), inserter(list, list.begin()));
//	copy(vec.begin(), vec.end(), front_inserter(flist));
//	copy(vec.begin(), vec.end(), back_inserter(deque));
//	for (auto i : list)
//		cout << i << "\t";
//	cout << endl;
//	for (auto i : deque)
//		cout << i << "\t";
//	cout << endl;
//	for (auto i : flist)
//		cout << i << "\t";
//	cout << endl;
//	getchar();
//}