#include<deque>
#include<list>
#include<iostream>
using namespace std;

inline void print(const deque<int> &deque){
	for (auto &i : deque)
		cout << i << " ";
	cout << endl;
}

void divListToDeque(const list<int> &intList, deque<int> &oddDeque, deque<int> &evenDeque){
	for (auto &i: intList){
		if (i % 2 == 0)
			evenDeque.push_back(i);
		else
			oddDeque.push_back(i);
	}
	print(oddDeque);
	print(evenDeque);
}

int main() {
	list<int> intList{ 1, 2, 3, 4, 5 };
	deque<int> oddDeque;
	deque<int> evenDeque;
	divListToDeque(intList, oddDeque, evenDeque);
}