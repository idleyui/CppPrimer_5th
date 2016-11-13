#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int read;
	while (cin >> read && read != 42) {
		cout << read << endl;
	}
	cout << "the answer to life, the universe, and everything" << endl;
}