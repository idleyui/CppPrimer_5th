#include<iostream>
using namespace std;

istream &getIs(istream &is){
	int outInt;
	while (is>>outInt, !is.eof()){
		if (is.bad()){
			throw runtime_error("wrong");
		}
		if (is.fail()){
			cout << "wrong type" << endl;
			is.clear();
			is.sync();
		}else{
			cout << outInt << endl;
		}
	}
	is.clear();
	return is;
}

//int main(){
//	getIs(cin);
//	getchar();
//}