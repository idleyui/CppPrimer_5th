#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	char carr[6]= "hello";
	char carr2[6] = "world";
	char result[11];
	strcpy(result, carr);
	strcat(result, carr2);
	cout << result;
}