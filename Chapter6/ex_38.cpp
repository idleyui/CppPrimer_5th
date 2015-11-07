#include<iostream>
#include<string>
using namespace std;

int odd[] = { 1, 3, 5, 7, 9 };
int even[] = { 0, 2, 4, 6, 8 };

decltype(odd) &arrPtr(int i){
	return (i % 2) ? odd : even;
}

//ÖØÔØµÄÁ·Ï°
int& a(const int &a){
	return const_cast<int&>(a);
}

//int main(){
//	int b = 2;
//	a(b) = 3;
//	cout << b << endl;
//	arrPtr(1)[0] = 47;
//	cout << odd[0];
//	getchar();
//}