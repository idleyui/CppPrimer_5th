#include<vector>
#include<iostream>
using namespace std;

void initVector(){
	vector<int> defaultVec;
	vector<int> listInitVec{ 0, 1, 2 };
	vector<int> copyInitVec(listInitVec);
	vector<int> iterCopyInitVec(listInitVec.begin(), listInitVec.end());
	vector<int> seqnInitVec(3);
	vector<int> seqntInitVec(3, 1);
}