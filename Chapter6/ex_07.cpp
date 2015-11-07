#include<iostream>
using namespace std;

int timeCalled(){
	static int num = 0;
	return ++num;
}