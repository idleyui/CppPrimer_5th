#include<vector>
#include<list>
#include<iostream>
using namespace std;

int main(){
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	vector<int> vec(begin(ia), end(ia));
	list<int> li(begin(ia), end(ia));

	auto item = vec.begin();
	while(item != vec.end()){
		if (*item % 2 == 0)
			item = vec.erase(item);
		else
			item++;
	}

	auto litem = li.begin();
	while (litem != li.end()){
		if (*litem % 2 != 0)
			litem = li.erase(litem);
		else
			litem++;
	}

	for (auto i : vec)
		cout << i << " ";
	cout << endl;

	for (auto i : li)
		cout << i << " ";
	cout << endl;
}