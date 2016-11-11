#include <iostream>
using namespace std;

int ex()
{
	int sum = 0, value = 0;
	while (cin >> value) {
		sum += value;
	}
	cout << sum << endl;
	return 0;
}