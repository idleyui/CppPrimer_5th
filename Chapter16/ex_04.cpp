//
//	implement the templete like the find in libray
//
//	Leelddd	2015/12/18
//
#include<iostream>
#include<vector>
using namespace std;

template<typename Con, typename type>
auto find(const Con &con, const type &t)
{
	auto iter = con.begin();
	while (iter != con.end())
	{
		if (*iter == t)
		{
			break;
		}
		else
		{
			++iter;
		}
	}
	return iter;
}

//int main()
//{
//	vector<int> int_vec{ 1,2,3,4,5 };
//	cout << *find(int_vec, 3);
//	getchar();
//}

