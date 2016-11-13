#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	try {
		cout << a / b;
	}catch (runtime_error error) {
		cout << "wrong";
	}
}