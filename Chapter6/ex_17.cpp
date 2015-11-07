#include<iostream>
#include<string>
using namespace std;

bool hasCap(const string &s){
	for (auto i : s){
		if (isupper(i))
			return true;
	}
	return false;
}

void changeToLow(string &s){
	int length = s.length();
	for (int i = 0; i < length; i++){
		if (!islower(s[i]))
			s[i] = tolower(s[i]);
	}
}

//void main(){
//	cout << hasCap("Has");
//	string s("Hello");
//	changeToLow(s);
//	cout << s;
//	getchar();
//}