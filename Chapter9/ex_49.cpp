#include<iostream>
#include<vector>
#include<string>
using namespace std;

void centerWord(string &str){
	string min("aceimnorstuvwxz");
	vector<int> intVec;
	string::size_type index = 0;
	while ((index = str.find_first_not_of(min, index)) != string::npos){
		intVec.push_back(index);
		++index;
	}
	int begin = 0, end = 0, value = 0;
	for (int i = 1; i < intVec.size();i++){
		int buf = intVec[i] - intVec[i-1];
		if (buf > value){
			value = buf;
			begin = intVec[i-1];
			end = intVec[i];
		}
	}
	str.erase(end, str.size()-end);
	str.erase(0, begin+1);
	
}

//int main(){
//	string str("sdvjcoivwmfncvkaaaaaaaaalwnemfdnoivs");
//	centerWord(str);
//	cout << str;
//	getchar();
//}