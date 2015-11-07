/*******************************************
implement and test function fact
2015/11/6	Leelddd
********************************************/

#include<iostream>
using namespace std;

void exchange(int *a, int *b){
	int buf = *a;
	*a = *b;
	*b = buf;
}

//void main(){
//	int a = 0;
//	int b = 1;
//	exchange(&a, &b);
//	cout << "a: " << a << "\tb: " << b << endl;
//	getchar();
//}