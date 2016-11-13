#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int arr[]{ 1,2,3 };
	vector<int> v(begin(arr), end(arr));
	int copy[3];
	for (size_t i = 0; i < v.size(); i++)
		copy[i] = v[i];
}