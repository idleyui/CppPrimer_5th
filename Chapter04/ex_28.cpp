#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	short s;
	int i;
	long l;
	long long ll;
	float f;
	double d;
	char c;
	bool b;
	cout << sizeof(s) << ","
		<< sizeof(i) << ","
		<< sizeof(l) << ","
		<< sizeof(ll) << ","
		<< sizeof(f) << ","
		<< sizeof(d) << ","
		<< sizeof(c) << ","
		<< sizeof(b) << ",";
}