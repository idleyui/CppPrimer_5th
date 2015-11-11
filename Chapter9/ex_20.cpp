#include<deque>
#include<list>
#include<iostream>
using namespace std;

inline void printDeque(deque<int> &deque){
	for (auto i : deque)
		cout << i << endl;
}

void divListToDeque(list<int> intList, deque<int> oddDeque, deque<int> evenDeque){
	for (auto &i: intList){
		if (i % 2 == 0)
			oddDeque.push_back(i);
		else
			evenDeque.push_back(i);
	}
	printDeque(oddDeque);
	printDeque(evenDeque);
}

//int main(){
//	list<int> intList{ 1, 2, 3, 4, 5 };
//	deque<int> oddDeque;
//	deque<int> evenDeque;
//	divListToDeque(intList, oddDeque, evenDeque);
//	getchar();
//}