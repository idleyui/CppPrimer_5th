#include<iostream>
#include<string>
using namespace std;

void replaceStrIndex(string &str, string &oldVal, string &newVal){
	bool hasOldVal = true;
	for (int i = 0; i < str.size(); i++){
		if (str[i] == oldVal[0]){
			for (int j = i; j < oldVal.size(); j++){
				if (str[j] != oldVal[j])
					hasOldVal = false;
			}
			if (hasOldVal)
				str.replace(i, oldVal.size(), newVal);
		}
	}
}

//int main(){
//	string s("abcdabcd");
//	string oldVal("ab");
//	string newVal("xx");
//	replaceStrIndex(s, oldVal, newVal);
//	cout << s;
//	getchar();
//}