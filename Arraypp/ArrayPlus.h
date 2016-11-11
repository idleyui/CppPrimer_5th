#pragma once
//
//	interface for some useful array operation
//
//	Leelddd	2015/12/18
//

template<typename T, unsigned int size>
void print(T(&arr)[size])
{
	for (auto elem : arr)
		cout << elem << endl;
}