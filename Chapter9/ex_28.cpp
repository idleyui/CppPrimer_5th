#include<iostream>
#include<string>
#include<forward_list>
using namespace std;

void insertAfterStr(forward_list<string> &flist, string flag, string insert){
	auto pre = flist.before_begin();
	auto iter = flist.begin();
	while (true){
		if (iter == flist.end() || *iter == flag){
			flist.insert_after(pre, insert);
			break;
		}
		iter++;
		pre++;
	}
}

//int main(){
//	forward_list<string> flist{ "a", "c", "d" };
//	insertAfterStr(flist, "a", "b");
//	insertAfterStr(flist, "e", "e");
//
//	auto iter = flist.begin();
//	while (iter != flist.end()){
//		cout << *iter << "\t";
//		iter++;
//	}
//	cout << endl;
//	getchar();
//}