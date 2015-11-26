#include"Chapter12.h"

vector<int> *returnVec(){
	vector<int> *intVec = new vector<int>;
	return intVec;
}

vector<int> *getEle(){
	int i = 0;
	vector<int> *intVec = returnVec();
	while (cin >> i){
		intVec->push_back(i);
	}
	return intVec;
}

//int main(){
//	vector<int> *intVec = getEle();
//	for (auto i : *intVec){
//		cout << i << "\t";
//	}
//	cout << endl;
//	delete intVec;
//}