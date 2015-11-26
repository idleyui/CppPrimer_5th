#ifndef HASPTR_H
#define HASPTR_H

#include"Chapter13.h"

class HasPtr{
public:
	HasPtr(const string &s = string()) :
		ps(new string(s)), i(0){}

	HasPtr(const HasPtr& copyHP) :ps(new string(*copyHP.ps)), i(copyHP.i){}

	~HasPtr(){
		delete(ps);
	}

	HasPtr& operator=(const HasPtr &);
	bool operator<(const HasPtr &);

private:
	string *ps;
	int i;

	friend void swap(HasPtr&, HasPtr&);
};

HasPtr& HasPtr::operator=(const HasPtr &copyHP)
{
	auto newp = new string(*copyHP.ps);
	delete(ps);
	ps = newp;
	i = copyHP.i;
	return *this;
}

bool HasPtr::operator<(const HasPtr &copyHp)
{
	return *ps < *copyHp.ps;
}

inline void swap(HasPtr &lhs, HasPtr &rhs)
{
	cout << "swap function begin!" << endl;
	using std::swap;
	swap(lhs.ps, rhs.ps);
	swap(lhs.i, rhs.i);
}
#endif