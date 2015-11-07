#include<iostream>
using namespace std;

int bigOne(int a, int *b){
	if (a > *b)
		return a;
	return *b;
}