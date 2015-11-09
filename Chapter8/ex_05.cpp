#include<fstream>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> readWordToVec(string f){
	vector<string> wordVec;
	ifstream ifs(f);
	if (ifs){
		string buf;
		while (!ifs.eof()){
			ifs >> buf;
			wordVec.push_back(buf);
		}
	}
	else{
		cout << "fail to open the file";
	}
	return wordVec;
}

//int main(){
//	for (auto i: readWordToVec("D:\\test.txt")){
//		cout << i << endl;
//	}
//	getchar();
//}