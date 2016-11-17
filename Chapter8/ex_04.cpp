#include<fstream>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> readLineToVec(const string &f) {
	ifstream ifs(f, fstream::in);
	vector<string> lineVec;
	if (!ifs) {
		cout << "fail to open the file";
		return lineVec;
	}
	while (!ifs.eof()) {
		string buf;
		getline(ifs, buf);
		lineVec.push_back(buf);
	}
	return lineVec;
}

int main(){
	string f("ex_01.cpp");
	for (auto i : readLineToVec(f)){
		cout << i << endl;
	}
}