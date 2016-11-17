#include<vector>
#include<list>
#include<iostream>
using namespace std;

int main(){
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	vector<int> copyOddVec;
	list<int> copyEvenList;

	for (auto i : ia){
		copyOddVec.push_back(i);
	}
	for (auto i : ia){
		copyEvenList.push_back(i);
	}

	vector<int>::iterator vectorIter = copyOddVec.begin();
	vector<int>::iterator vectorEnd = copyOddVec.end();
	while(vectorIter != vectorEnd){
		if (*vectorIter % 2 == 0)
			vectorIter = copyOddVec.erase(vectorIter);
		else
			vectorIter++;
		vectorEnd = copyOddVec.end();
	}

	list<int>::iterator listIter = copyEvenList.begin();
	list<int>::iterator listEnd = copyEvenList.end();
	while (listIter != copyEvenList.end()){
		if (*listIter % 2 != 0)
			listIter = copyEvenList.erase(listIter);
		else
			listIter++;
		listEnd = copyEvenList.end();
	}

	for (auto i : copyOddVec)
		cout << i << "\t";
	cout << endl;

	for (auto i : copyEvenList)
		cout << i << "\t";
	cout << endl;
}