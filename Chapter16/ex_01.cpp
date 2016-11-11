/*******************************************
implement and test function template compare
2015/11/6	Leelddd
********************************************/
#include<iostream>
using namespace std;

template<typename T>
T compare(const T &v1, const T &v2)
{
	if (v1 < v2)	return -1;
	if (v2 < v1)	return 1;
	return 0;
}

//void main(){
//	double a = 2;
//	double b = 1;
//	cout << compare(a, b);
//	getchar();
//}