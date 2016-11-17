#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<int> vec{ 1,2,3 };
	vec.erase(vec.begin(), vec.begin());
	cout << vec.size() << endl;
	vec.erase(vec.begin(), vec.begin() + 1);
	cout << vec.size() << endl;
	//vec.erase(vec.begin(), vec.end());
	//cout << vec.size() << endl;
	vec.erase(vec.end(), vec.end());
	cout << vec.size();
}