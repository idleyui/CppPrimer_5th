#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int arr[10];
	cout << arr[0] << endl;
	for (size_t i = 0; i < 10; i++)
		arr[i] = i;
	for (auto i : arr)
		cout << arr[i];
	cout << endl;

	int copy[10];
	for (size_t i = 0; i < 10; i++)
		copy[i] = arr[i];

	vector<int> v;
	for (size_t i = 0; i < 10; i++)
		v.push_back(i);

	vector<int> vcopy = v;
	cout << vcopy[0];
}