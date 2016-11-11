#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<int> v(10, 1);
	for (auto item = v.begin(); item != v.end(); item++)
	{
		*item *= 2;
	}
	for (auto i : v)
		cout << i;
}