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
	string getName()const{ return name; }
	string getAddress() const { return address; }
};
#endif