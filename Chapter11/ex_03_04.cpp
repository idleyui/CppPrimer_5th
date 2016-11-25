#include<fstream>
#include<iostream>
#include<string>
#include<iterator>
#include<map>
#include<set>
using namespace std;

map<string, int> m;

void cutString(string str){
	auto begin = str.begin();
	auto iter = begin;

	auto f = [&]() {if (begin != iter)m[string(begin, iter)]++; };

	for (; iter != str.end(); iter++){
		tolower(*iter);
		if (ispunct(*iter))
			f(), begin = iter + 1;
	}
	if (begin != str.end())	f();
}

void countWordsNum(string file){
	ifstream ifs(file);
	istream_iterator<string> iter(ifs);
	istream_iterator<string> eof;

	while (iter != eof)	cutString(*iter++);
}

int main() {
	countWordsNum("test_03.txt");

	for (const auto &i : m) {
		cout << i.first << " occurs " << i.second << " times." << endl;
	}
}