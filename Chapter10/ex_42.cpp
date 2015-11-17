#include<algorithm>
#include<iostream>
#include<string>
#include<list>
using namespace std;

void elimDups(list<string> &words){
	words.sort();
	words.unique();
}

int main(){
	list<string> list{ "asd", "vsdf", "asd", "ddddd" };
	elimDups(list);
	for (auto s : list)
		cout << s << "\t";
	cout << endl;
	getchar();
}