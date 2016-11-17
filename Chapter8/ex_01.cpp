#include<iostream>
using namespace std;

istream &getIs(istream &is){
	int outInt;
	while (is>>outInt, !is.eof()){
		if (is.bad()){
			cout << "bad" << endl;
			throw runtime_error("wrong");
		}
		if (is.fail()){
			cout << "wrong type" << endl;
			is.clear();
			is.ignore(100, '\n');
			continue;
		}
		cout << outInt << endl;
	}
	is.clear();
	return is;
}

int main() {
	try {
		getIs(cin);
	}
	catch (runtime_error err) {
		cout << "hi";
	}
}