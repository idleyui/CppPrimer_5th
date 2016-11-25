#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, unsigned sz){
	return s.size() >= sz;
}

void findGreater(vector<string> &words){
	unsigned sz = 4;
	auto iter = find_if(words.begin(), words.end(), bind(check_size, _1, sz));
	cout << *iter;
}

int main() {
	vector<string> vec{ "asd", "dsfsdg", "xvdsfed" };
	findGreater(vec);
	getchar();
}