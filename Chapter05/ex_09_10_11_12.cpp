#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isVowel(char c) {
	return c == 'a' || c == 'u' || c == 'e' || c == 'i' || c == 'o';
}

bool isEmpty(char c) {
	return c == ' ' || c == '\t' || c == '\n';
}

int main() {
	int vowelCount = 0;
	int emptyCount = 0;
	int doubleCount = 0;
	
	char c;
	char buf = ' ';
	while (cin.get(c)) {
		if ((c == 'f' || c == 'l' || c == 'i') && buf == 'f')
			++doubleCount;
		buf = c;
		c = tolower(c);
		if (isVowel(c))
			++vowelCount;
		if (isEmpty(c))
			++emptyCount;
	}

	cout << vowelCount;
	cout << emptyCount;
	cout << doubleCount;
}