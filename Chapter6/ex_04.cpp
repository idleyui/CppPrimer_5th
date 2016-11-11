#include<iostream>
using namespace std;

int fact(){
	int val = 0;
	cin >> val;

	int ret = 1;
	while (val > 1)
		ret *= val--;
	return ret;
}