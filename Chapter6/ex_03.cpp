/*******************************************
implement and test function fact
2015/11/6	Leelddd
********************************************/

#include<iostream>
using namespace std;

int fact(int val){
	int ret = 1;
	while (val > 1)
		ret *= val--;
	return ret;
}