/*******************************************
implement and test function fact
2015/11/6	Leelddd
********************************************/

#include<iostream>
using namespace std;

int timeCalled(){
	static int num = 0;
	return ++num;
}