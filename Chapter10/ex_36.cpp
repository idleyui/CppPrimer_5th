#include<iostream>
#include<iterator>
#include<list>
#include<algorithm>
using namespace std;

int main(){
	list<int> list{ 1, 2, 3, 4, 1, 0, 1, 2, 3, 4, 2, 0 };
	*find(list.rbegin(), list.rend(), 0) = -1;
	for (auto &i : list) cout << i << " "; cout << endl;
}