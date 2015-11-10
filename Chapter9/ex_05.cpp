#include<vector>
#include<iostream>
using namespace std;

vector<int>::iterator findValue(vector<int>::iterator begin, vector<int>::iterator end, int value){
	while (begin != end){
		if (*begin == value)
			return begin;
		begin++;
	}
	cout << "can't find the value";
	return end;
}

//int main(){
//	vector<int> intvec{ 0, 1, 2, 3 };
//	cout << *findvalue(intvec.begin(), intvec.end(), 2);
//	getchar();
//}