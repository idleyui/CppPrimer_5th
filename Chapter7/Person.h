#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include<string>
using namespace std;
class Person{
private:
	string name;
	string address;
public:
	Person() = default;
	Person(string n, string addr):name(n), address(addr){}
	explicit Person(istream &is);
	string getName()const{ return name; }
	string getAddress() const { return address; }
	friend istream &read(istream &is, Person &item);
};

istream &read(istream& is, Person &item){
	is >> item.name >> item.address;
	return is;
}

Person::Person(istream &is){
	read(is, *this);
}
#endif