#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string input;
	string buf = "";
	int count = 0;
	while (cin >> input) {
		if (input == buf) {
			++count;
		}
		else if (count != 0) {
			cout << buf << " " << count + 1 << endl;
			count = 0;
		}
		buf = input;
	}
}