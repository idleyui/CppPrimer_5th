#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<string> strs{ "abc", "abcdefg" };

	auto morethansix = [](const string &s)->bool {
		return s.size() > 6;
	};

	cout << count_if(strs.begin(), strs.end(), morethansix) << " word length more than six" << endl;
}