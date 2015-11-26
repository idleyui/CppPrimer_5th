#include"Sales_data.h"

int main(){
	Sales_data data1;
	Sales_data data2("cpp primer5th");
	Sales_data data3("cpp primer5th", 5, 80);
	Sales_data data4(cin);
	cout << data4.isbn();
	getchar();
	getchar();
	getchar();
}