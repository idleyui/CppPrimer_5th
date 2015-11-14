#include<iostream>
#include<vector>
#include<string>
using namespace std;

int sumOfVec(vector<string> &vec){
	int sum = 0;
	for (auto i : vec){
		sum += stoi(i);
	}
	return sum;
}

double sumOfDoubleVec(vector<string> &vec){
	double sum = 0;
	for (auto d : vec){
		sum += stod(d);
	}
	return sum;
}

int main(){
	vector<string> str{ "1", "2", "3" };
	cout << sumOfVec(str) << endl;
	vector<string> strD{ "1.1", "2.2" };
	cout << sumOfDoubleVec(strD);
	getchar();
}