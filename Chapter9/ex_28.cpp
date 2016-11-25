#include<iostream>
#include<string>
#include<forward_list>
using namespace std;

void insertAfterStr(forward_list<string> &flist, string flag, string insert){
	auto pre = flist.before_begin();
	auto item = flist.begin();
	while (item != flist.end() && *item != flag)
		pre++, item++;
	item == flist.end() ? flist.insert_after(pre, insert) : flist.insert_after(item, insert);
}

int main(){
	forward_list<string> flist{ "a", "c", "d" };
	insertAfterStr(flist, "a", "b");
	insertAfterStr(flist, "no", "e");
	for (auto i : flist)
		cout << i << " ";
	cout << endl;
}