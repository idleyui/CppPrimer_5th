/*******************************************
implement and test function fact
2015/11/6	Leelddd
********************************************/

#include<iostream>
using namespace std;

int testVariable(int para){
	static int static_var = 1;
	++static_var;
	cout << static_var;
	cout << para;
	int local_variable = 0;
	return local_variable;
}

//void main(){
//	cout << testVariable(1);
//	cout << testVariable(2);
//	getchar();
//}