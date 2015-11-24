#include"Chapter12.h"

shared_ptr<vector<int>> returnVec(){
	shared_ptr<vector<int>> intVec = make_shared<vector<int>>();
	return intVec;
}

shared_ptr<vector<int>> getEle(){
	int i = 0;
	shared_ptr<vector<int>> intVec = returnVec();
	while (cin >> i){
		intVec->push_back(i);
	}
	return intVec;
}
 
int main(){
	shared_ptr<vector<int>> intVec = getEle();
	for (auto i : *intVec){
		cout << i << "\t";
	}
	cout << endl;
}