#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<string>
using namespace std;

int main() {

	istream_iterator<int> iter(cin);
	istream_iterator<int> eof;
	vector<int> vec(iter, eof);
	sort(vec.begin(), vec.end());
	ostream_iterator<int> out(cout, " ");
	unique_copy(vec.begin(), vec.end(), out);

}