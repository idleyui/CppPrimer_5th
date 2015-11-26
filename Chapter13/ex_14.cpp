#include"Chapter13.h"

class numbered{
public:
	numbered() : mysn(++nums){}
	int mysn = 0;
private:
	static int nums;
};

int numbered::nums = 0;

void f(numbered s)
{
	cout << s.mysn << endl;
}

//int main()
//{
//	numbered a, b = a, c = b;
//	f(a); f(b); f(c);
//	getchar();
//}