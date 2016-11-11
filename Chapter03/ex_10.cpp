#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	string result;
	cin >> s;
	int begin = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (ispunct(s[i]))
		{
			result += s.substr(begin, i - begin);
			begin = i+1;
		}
	}
	result += s.substr(begin, s.length() - begin);
	cout << result;
}