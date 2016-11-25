#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool moreThanFive(const string &str){
	return str.size() > 5;
}

int main(){
	vector<string> words{ "a", "ab", "abcd", "abcdef", "asdsdfdg" };
	auto end = partition(words.begin(), words.end(), moreThanFive);
	auto iter = words.begin();
	while (iter != end){
		cout << *iter << "\t";
		++iter;
	}
}