#include<iostream>
#include<string>
using namespace std;
struct Sales_data{
	string bookNo;
	unsigned units_sold;
	double revenue;
};

int main(){
	Sales_data item = { "978", 25, 15.99 };
	Sales_data ite = {};
	cout << ite.revenue;
	getchar();
}