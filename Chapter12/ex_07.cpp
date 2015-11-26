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
	/*shared_ptr<vector<int>> intVec = getEle();
	for (auto i : *intVec){
		cout << i << "\t";
	}
	cout << endl;*/

	allocator<int> alloc;
	int *p = alloc.allocate(10);
	int *begin = p;
	for (int i = 0; i < 10; i++){
		alloc.construct(p++, i);
	}
	for (int i = 0; i < 10; i++){
		cout << *begin++;
	}
	getchar();
}