#include<iostream>
using namespace std;

void exchangePoint(int *&a, int *&b){
	int *p = a;
	a = b;
	b = p;
}

//void main(){
//	int a = 1;
//	int b = 2;
//	int *pa = &a;
//	int *pb = &b;
//	exchangePoint(pa, pb);
//	*pb = 3;
//	*pa = 4;
//	cout << a << "\t" << b;
//	getchar();
//}

