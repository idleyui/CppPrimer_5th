#include<iostream>
using namespace std;
extern int testVariable(int);
extern int timeCalled();
extern void exchange(int*, int*);

void printArr(const int * arr)
{
	printf("%d", arr[0]);
}

//void main() {
//	cout << timeCalled() << timeCalled() << endl;
//
//	cout << "ex_10:" << endl;
//	int a = 1, b = 3;
//	exchange(&a, &b);
//	cout << a << " " << b << endl;
//
//	int i = 1;
//	printArr(&i);
//	
//}