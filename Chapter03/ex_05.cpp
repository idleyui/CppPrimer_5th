#include <iostream>
#include <string>
using namespace std;

int main() {
	string buf;
	string result;
	while (cin >> buf) {
		result += " ";
		result += buf;
	}
	cout << result << endl;
}