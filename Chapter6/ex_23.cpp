#include<iostream>
using namespace std;

void print(const int *begin,const int *end){
	while (begin != end)
		cout << *begin++ << endl;
}

//void main(){
//	int i = 0, j[2] = { 0, 1 };
//	print(begin(j), end(j));
//}