#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isprefix(const vector<int> &less, const vector<int> &more) {
	if (less.size() > more.size())
		return isprefix(more, less);
	for (size_t i = 0; i < less.size(); i++)
		if (less[i] != more[i])
			return false;
	return true;
}

int main() {
	vector<int> less{ 1,2,3 };
	vector<int> more{ 1,2,3,4,5 };
	cout << isprefix(less, more);
	cout << isprefix(more, less);
}