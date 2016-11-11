#pragma once
#include<iostream>
using namespace std;

int testVariable(int para){
	static int static_var = 1;
	int local_variable = 0;
	cout << static_var++ << " " << para << " " << local_variable << endl;
	return local_variable;
}