/******************************************
class Sales_data, implement some basic uses
*******************************************/

#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<iostream>
#include<string>
using namespace std;

struct Sales_data{
private:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	double avg_price() const;
		
public:
	//constructors
	Sales_data() = default;
	Sales_data(const string &s, unsigned n, double p) :
		bookNo(s), units_sold(n), revenue(p*n){}
	explicit Sales_data(const string &s) :bookNo(s) {}
	explicit Sales_data(istream& is);//istream and default

	//functions
	string isbn()const { return bookNo;}
	Sales_data& combine(const Sales_data&);

	//friend class and functions
	friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
	friend ostream &print(ostream& os, const Sales_data &item);
	friend istream &read(istream& is, Sales_data &item);
};

inline double Sales_data::avg_price() const{
	return units_sold ? revenue / units_sold : 0;
}

Sales_data& Sales_data::combine(const Sales_data &rhs){
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs){
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}
ostream &print(ostream& os, const Sales_data &item){
	os << item.bookNo << item.units_sold << item.revenue;
	return os;
}
istream &read(istream& is, Sales_data &item){
	is >> item.bookNo >> item.units_sold >> item.revenue;
	return is;
}

Sales_data::Sales_data(istream &is){
	read(is, *this);
}
#endif