#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Date{
public:
	Date(string str){
		if (str.find_first_of(",")){
			string num("1234567890");
			string word("qwertyuiopasdfghjklzxcvbnm");
			unsigned index = str.find_first_not_of(word);
			year = stoi(str.erase(0, index));
			unsigned indexMonth = str.find_first_of(",");
			month = stoi(str.erase(index, indexMonth));
			day = stoi(str.erase(indexMonth, str.size()));
		}
		else if (str.find_first_of("/")){

		}
		else{

		}
	}
private:
	unsigned year;
	unsigned month;
	unsigned day;
};