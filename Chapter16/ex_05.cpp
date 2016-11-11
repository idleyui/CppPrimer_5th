//
//	print	print any kind any size array
//
//	Leelddd	2015/12/18
//
#include<iostream>
using namespace std;

template<typename T, unsigned int size>
void print(T(&arr)[size])
{
	for (auto elem : arr)
		cout << elem << endl;
}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	print(arr);
//	getchar();
//}