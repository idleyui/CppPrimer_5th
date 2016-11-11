#include <iostream>
#include <string>
#include <vector>
using namespace std;

void nearSum(vector<int> v) {
	if (v.size() == 0)	return;
	for (int i = 0; i < v.size() - 1; i += 2)
	{
		cout << v[i] + v[i + 1] << endl;
	}
	if (v.size() % 2 != 0)
		cout << v[v.size() - 1] << endl;
}

void sum(vector<int> v) {
	if (v.size() == 0)	return;
	auto begin = v.begin();
	auto end = v.end() -1;
	while (begin != end) {
		cout << *begin++ + *(end--) << endl;
	}
	if (v.size() % 2 != 0)
		cout << *begin << endl;
}

int main() {
	vector<int> v{ 1,2,4 };
	//nearSum(v);
	sum(v);
}