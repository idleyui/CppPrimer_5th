#include<fstream>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> readWordToVec(const string &f) {
	vector<string> wordVec;
	ifstream ifs(f, fstream::in);
	if (!ifs) {
		cout << "fail to open the file" << endl;
		return wordVec;
	}
	while (!ifs.eof()) {
		string buf;
		ifs >> buf;
		wordVec.push_back(buf);
	}
	return wordVec;
}

int main(){
	for (auto i: readWordToVec("ex_01.cpp")){
		cout << i << endl;
	}
}