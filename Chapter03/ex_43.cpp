#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int ia[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	//for(auto &row: ia)
	for (int (&row)[4]: ia)
		for (auto &col : row)
			cout << col << " ";
	cout << endl;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			cout << ia[i][j] << " ";
	cout << endl;

	for (auto pi = begin(ia); pi != end(ia); pi++)
		for (auto pj = begin(*pi); pj != end(*pi); pj++)
			cout << *pj << " ";
	cout << endl;

	cout << 3 % -2;
}