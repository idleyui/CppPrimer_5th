#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
	fstream f("test.txt", fstream::ate | fstream::out);
	f << "1";
	f << "2";
	f << "more" << endl;
	f << "end" << endl;
}