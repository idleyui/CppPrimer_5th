#include"Chapter13.h"

class HasPtr{
public:
	HasPtr(const string &s = string()) :
		ps(new string(s)), i(0){}

	HasPtr(const HasPtr& copyHP);

	~HasPtr(){
		delete(ps);
	}

	HasPtr& operator=(const HasPtr& copyHP);
	
private:
	string *ps;
	int i;
};

HasPtr::HasPtr(const HasPtr& copyHP)
{
	ps = new string(*copyHP.ps);
	i = copyHP.i;
}

HasPtr& HasPtr::operator=(const HasPtr& copyHP)
{
	ps = new string(*copyHP.ps);
	i = copyHP.i;
	return *this;
}