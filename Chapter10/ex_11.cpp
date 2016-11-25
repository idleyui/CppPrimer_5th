#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool isShorter(const string &s1, const string &s2){
	return s1.size() < s2.size();
}

vector<string> &elimDups(vector<string> &words){
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
	return words;
}

void sortElimDups(vector<string> strVec){
	stable_sort(strVec.begin(), strVec.end(), isShorter);
	for (auto s : strVec)
		cout << s << "\t";
}

int main(){
	vector<string> strVec{ "hi", "sdf", "cvxc", "df" };
	sortElimDups(elimDups(strVec));
}