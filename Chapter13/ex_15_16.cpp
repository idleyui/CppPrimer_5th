#include"Chapter13.h"

class numbered_15{
public:
	numbered_15() : mysn(++nums){}
	numbered_15(const numbered_15& copy){
		cout << "in";
		mysn = ++copy.nums;
	}
	int mysn = 0;
private:
	static int nums;
};

int numbered_15::nums = 0;

void f2(const numbered_15 &s)
{ 
	cout << s.mysn << endl;
}

void f3(numbered_15 s)
{
	cout << s.mysn << endl;
}

//int main()
//{
//	numbered_15 a, b = a, c = b;
//	f2(a); f2(b); f2(c);
//	numbered_15 d, e = d, f = e;
//	f2(d); f2(e); f2(f);
//	getchar();
//}