#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;

void stringsVec(string f){
	ifstream ifs(f);
	if (!ifs){
		cout << "fail to open the file";
		return;
	}
	vector<string> lineVec;
	string line;
	while (getline(ifs, line)){
		lineVec.push_back(line);
	}
	
	for (auto &it: lineVec){
		istringstream iss(it);
		string buf;
		while (iss >> buf){
			cout << buf;
		}
		cout << endl;
	}
	
}

int main(){
	stringsVec("D:\\test\\ex_10.txt");
	getchar();
}