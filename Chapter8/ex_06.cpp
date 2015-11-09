#include<iostream>
#include<fstream>
#include<string>
#include"Sales_data.h"
using namespace std;

int testSale(string f){
	ifstream ifs(f);
	ofstream ofs(f, ofstream::app);
	Sales_data total;
	if (!ifs){
		cout << "fail to open the file";
	}
	if (read(ifs, total)){
		Sales_data trans;
		while (read(ifs, trans)){
			if (total.isbn() == trans.isbn()){
				total.combine(trans);
			}
			else{
				print(ofs, total) << endl;
				total = trans;
			}
		}
		print(ofs, total) << endl;
	}
	else{
		std::cerr << "No data?!" << std::endl;
		return -1;
	}
	return 0;
}

//int main(){
//	Sales_data data;
//	string f("D:\\test\\Sale.txt");
//	testSale(f);
//	getchar();
//}