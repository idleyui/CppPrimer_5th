#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool moreThanFive(const string &str){
	return str.size() < 5;
}

//int main(){
//	vector<string> words{ "a", "ab", "abcd", "abcde", "asdsdfdg" };
//	auto iter = partition(words.begin(), words.end(), moreThanFive);
//	//auto iter = words.begin();
//	while (iter != words.end()){
//		cout << *iter << "\t";
//		++iter;
//	}
//	getchar();
//}