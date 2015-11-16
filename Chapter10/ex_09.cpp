#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void printVec(vector<string> &words){
	for (auto s : words)
		cout << s << "\t";
	cout << endl;
}

void elimDups(vector<string> &words){
	printVec(words);
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	printVec(words);
	words.erase(end_unique, words.end());
	printVec(words);
}

//int main(){
//	vector<string> strVec{ "ds", "cv", "ab", "vcb","ab" };
//	elimDups(strVec);
//	getchar();
//}