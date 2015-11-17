#include<iostream>
#include<iterator>
#include<vector>
#include<string>
using namespace std;

void printReverse(vector<int> vec){
	auto riter = vec.crbegin();
	while (riter != vec.crend())
		cout << *(riter++) << "\t";
	cout << endl;

	auto iter = vec.cend();
	while (iter != vec.cbegin())
		cout << *(--iter) << "\t";
	cout << endl;
}

//int main(){
//	vector<int> vec{ 0, 1, 2, 3, 4, 5, 6, 7, 8 };
//	printReverse(vec);
//	getchar();
//}