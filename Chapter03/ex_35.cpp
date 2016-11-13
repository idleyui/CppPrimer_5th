#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int a[10];
	int *p = begin(a);
	int *e = end(a);
	while (p != e)
		*p++ = 0;
	for (auto i : a)
		cout << i;
}