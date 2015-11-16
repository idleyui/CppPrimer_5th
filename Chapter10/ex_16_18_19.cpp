#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> &elimDups_16(vector<string> &words){
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
	return words;
}

void biggies(vector<string> &words, unsigned sz){
	elimDups_16(words);
	stable_sort(words.begin(), words.end(), [](const string &a, const string &b)->bool{return a.size() < b.size(); });
	auto iter = stable_partition(words.begin(), words.end(), [sz](const string &str)->bool{return str.size() < sz; });
	while (iter != words.end()){
		std::cout << *iter << "\t";
		++iter;
	}
}

//int main(){
//	vector<string> words{ "a", "ab", "abcd", "abcde", "asdsdfdg" };
//	biggies(words, 5);
//	getchar();
//}