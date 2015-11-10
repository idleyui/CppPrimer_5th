#include<vector>
#include<list>
#include<iostream>
using namespace std;

void initListToVec(list<int> intList){
	vector<double> doubleVec(intList.begin(), intList.end());
	for (auto d : doubleVec){
		cout << d << endl;
	}
}

//int main(){
//	list<int> intLine{ 1, 2, 3, 4 };
//	initListToVec(intLine);
//	getchar();
//}