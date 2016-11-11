#include<iostream>
using namespace std;

void exchange(int *a, int *b){
	int buf = *a;
	*a = *b;
	*b = buf;
}