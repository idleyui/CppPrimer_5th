#include"Chapter13.h"
struct X
{
	X(){ cout << "X()" << endl; }
	X(const X& x){ 
		cout << "X(const X&)" << endl; }
	X& operator=(const X& x) { 
		cout << "X& operator" << endl; 
		return *this; 
	}
	~X(){ cout << "~X" << endl; }
};

X returnX(){
	cout << "returnX" << endl;
	X x;
	return x;
}

X* returnXp(){
	cout << "returnXp" << endl;
	X *x = new X();
	return x;
}

X& returnXX(){
	cout << "returnXX" << endl;
	X x;
	return x;
}

X& returnXXX(X &x){
	cout << "returnXXX" << endl;
	return x;
}

X& returnXXXX(X x){
	cout << "returnxxxx" << endl;
	return x;
}

//int main(){
//	X x1;
//	X x2(x1);
//	X x3 = x1;
//	X *x4 = &x1;
//	x3 = x2;
//
//	cout << endl << "vec1" << endl;
//	vector<X> vec(2, x1);
//	
//	cout << endl << "vec2" << endl;
//	vector<X> vec2{ x1, x2 };
//
//	x1 = returnX();
//	returnXp();
//	returnXX();
//	returnXXX(x1);
//	returnXXXX(x1);
//	getchar();
//}

