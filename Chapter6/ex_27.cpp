#include<iostream>
using namespace std;

int initSum(initializer_list<int> ints){
	int sum = 0;
	for (auto &elem : ints){
		sum += elem;
	}
	return sum;
}

void main() {
	cout << initSum({ 1, 2, 3 });
	getchar();
}