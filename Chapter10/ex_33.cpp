#include<iostream>
#include<fstream>
#include<iterator>
#include<vector>
#include<string>
using namespace std;

void divOddEven(string file, string OddFile, string EvenFile){
	//save nums in vector
	ifstream ifs(file);
	istream_iterator<int> initer(ifs);
	istream_iterator<int> eof;

	ofstream ofo(OddFile);
	ofstream ofe(EvenFile);
	ostream_iterator<int> odditer(ofo, " ");
	ostream_iterator<int> eveniter(ofe, "\n");
	
	while (initer != eof){
		if (*initer % 2 != 0){
			odditer++ = *(initer++);
		}
		else{
			eveniter++ = *(initer++);
		}
	}
	
}

int main(){
	divOddEven("test33_1.txt", "test33_2.txt", "test33_3.txt");
}