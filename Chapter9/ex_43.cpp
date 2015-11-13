#include<iostream>
#include<string>
using namespace std;

void replaceStr(string &s, string oldVal, string newVal){
	auto iter_s = s.begin();
	int i = 0;
	while (iter_s != s.end()){
		auto iter_o = oldVal.begin();
		if (*iter_s == *iter_o){
			auto iter_ss = iter_s;
			while (iter_o != oldVal.end()){
				if (*iter_ss != *iter_o)
					break;
				iter_ss++;
				iter_o++;
			}
			if (iter_o == oldVal.end()){
				iter_s = s.erase(iter_s, iter_ss);
				s.insert(i, newVal);
			}
			else{
				iter_s++;
				i++;
			}
		}
		else{
			iter_s++;
			i++;
		}
		
		
	}
}

int main(){
	string s("abcdabcd");
	string oldVal("ab");
	string newVal("xx");
	replaceStr(s, oldVal, newVal);
	cout << s;
	getchar();
}