#include<iostream>
#include<fstream>
#include<iterator>
#include<vector>
#include<string>
using namespace std;

int main(){

	ifstream ifs("test29.txt");
	istream_iterator<string> iter(ifs);
	istream_iterator<string> eof;
	vector<string> vec(iter, eof);
	for (auto &s : vec)	cout << s << "\n"; cout << endl;
}