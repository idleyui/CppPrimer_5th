#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<string> &words){
	for (auto s : words)
		cout << s << "\t";
	cout << endl;
}

void elimDups(vector<string> &words){
	//print(words);
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	//print(words);
	words.erase(end_unique, words.end());
	//print(words);
}

int main(){
	vector<string> strVec{ "ds", "cv", "ab", "vcb","ab" };
	elimDups(strVec);
	print(strVec);
}