#ifndef HasPtr_P_H
#define HASPTR_P_H

#include"Chapter13.h"

class HasPtr_p{
public:
	HasPtr_p(const string &s = string()) :
		ps(new string(s)), i(0){}

	HasPtr_p(const HasPtr_p& copyHP) :ps(copyHP.ps), i(copyHP.i), use(copyHP.use){ ++*use; }

	~HasPtr_p(){
		if (--*use == 0)
		{
			delete(ps);
			delete(use);
		}
		else{ ; }
	}

	HasPtr_p& operator=(const HasPtr_p& copyHP);

private:
	string *ps;
	int i;
	unsigned int *use;

};

HasPtr_p& HasPtr_p::operator=(const HasPtr_p& copyHP)
{
	++*copyHP.use;
	if (--*use == 0){
		delete ps;
		delete use;
	}
	ps = copyHP.ps;
	i = copyHP.i;
	use = copyHP.use;
	return *this;
}
#endif