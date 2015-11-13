#include<iostream>
#include<forward_list>
using namespace std;

void deleteOdd(forward_list<int> &flist){
	auto pre = flist.before_begin();
	auto curr = flist.begin();
	while (curr != flist.end()){
		if (*curr % 2 != 0){
			curr = flist.erase_after(pre);
		}
		else{
			pre = curr;
			curr++;
		}
	}
}

//int main(){
//	forward_list<int> flist{1, 2, 3, 4, 5, 6};
//	deleteOdd(flist);
//	auto iter = flist.begin();
//	while (iter != flist.end()){
//		cout << *iter << "\t";
//		iter++;
//	}
//	cout << endl;
//	getchar();
//}