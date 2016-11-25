#include<iostream>
#include<forward_list>
using namespace std;

void deleteOdd(forward_list<int> &flist){
	auto pre = flist.before_begin();
	auto item = flist.begin();
	while (item != flist.end()) {
		if (*item % 2 != 0)
			item = flist.erase_after(pre);
		else {
			pre = item;
			++item;
		}

	}
}

int main() {
	forward_list<int> flist{ 1, 2, 3, 4, 5, 6 };
	deleteOdd(flist);
	for (auto item : flist)
		cout << item;
	cout << endl;
}