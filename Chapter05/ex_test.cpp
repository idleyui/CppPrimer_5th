#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int a = 1;
	switch (a) {
	case 1:
		int b = 2;
		//cout << b;
		break;
	case 2:
		break;
	}


	while (1)
		while (1)
			goto outloop;
	outloop:
	cout << 1;
}