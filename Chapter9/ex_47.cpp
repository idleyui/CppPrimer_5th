#include<iostream>
#include<string>
using namespace std;

void findNum(string str){
	string::size_type index = 0;
	while ((index = str.find_first_of("1234567890", index)) != string::npos){
		cout << str[index] << "\t";
		++index;
	}
	cout << endl;
}

void findStrBack(string str){
	string::size_type index = 0;
	while ((index = str.find_first_not_of("1234567890", index)) != string::npos){
		cout << str[index] << "\t";
		++index;
	}
	cout << endl;
}

//int main(){
//	findNum("sdsd2ssd23");
//	findStrBack("sdsd2ssd23");
//	getchar();
//}