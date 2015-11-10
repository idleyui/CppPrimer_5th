#include<vector>
#include<iostream>
using namespace std;

bool findValue(vector<int>::const_iterator begin, vector<int>::const_iterator end, int value){
	while (begin != end){
		if (*begin == value)
			return true;
		begin++;
	}
	return false;
}

//int main(){
//	vector<int> intVec{ 0, 1, 2, 3 };
//	cout << findValue(intVec.cbegin(), intVec.cend(), 2);
//	getchar();
//}