#include<iostream>
#include<string>
#include<list>
#include<forward_list>
using namespace std;

void deleteOddCopyEven(list<int> &list){
	auto iter = list.begin();
	while (iter != list.end()){
		if (*iter % 2){
			iter = list.insert(iter, *iter);
			iter++;
			iter++;
		}
		else{
			iter = list.erase(iter);
		}
	}
}

void deleteOddCopyEven(forward_list<int> &flist){
	auto pre = flist.before_begin();
	auto iter = flist.begin();
	while (iter != flist.end()){
		if (*iter % 2){
			iter = flist.insert_after(iter, *iter);
			pre++;
			iter++;
			pre++;
		}
		else{
			iter = flist.erase_after(pre);
		}
	}
}

//int main(){
//	list<int> list{ 1, 2, 3, 4, 5, 6 };
//	forward_list<int> flist{ 1, 2, 3, 4, 5, 6 };
//	deleteOddCopyEven(list);
//	deleteOddCopyEven(flist);
//
//	auto iter = list.begin();
//	while (iter != list.end()){
//		cout << *iter << "\t";
//		iter++;
//	}
//	cout << endl;
//
//	auto ite = flist.begin();
//	while (ite != flist.end()){
//		cout << *ite << "\t";
//		ite++;
//	}
//	cout << endl;
//	getchar();
//}