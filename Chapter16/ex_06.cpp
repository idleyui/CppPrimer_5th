#include<iostream>

template<typename T>
T* begin(T *p)
{
	std::cout << p;
	return p;
}

template<typename T>
T* end(T *p)
{
	while (*p!=0xcccccccc)
		p++;
	return p;
}

template<typename T>
constexpr unsigned int size(T *arr)
{

}


int main()
{
	int arr[3] = { 1,2,3 };
	std::string a[3] = { "2","3","4" };
	int *iter = begin(arr);
	int *en = end(arr);
	while (iter != end(arr))
		std::cout << *iter++ << std::endl;
	//end(arr);
	getchar();
}