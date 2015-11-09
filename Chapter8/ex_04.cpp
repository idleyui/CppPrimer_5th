#include<fstream>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> readLineToVec(string &f){
	ifstream ifs(f);
	vector<string> lineVec;
	string buf;
	if (ifs){
		while (!ifs.eof()){
			getline(ifs, buf);
			lineVec.push_back(buf);
		}
		return lineVec;
	}
	cout << "fail to open the file";
	return lineVec;
}

//int main(){
//	string f("D:\\test.txt");
//	for (auto i : readLineToVec(f)){
//		cout << i << endl;
//	}
//	getchar();
//}