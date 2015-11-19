#ifndef CHAPTER11_H
#define CHAPTER11_H

#include<fstream>
#include<iostream>
#include<string>
#include<vector>
#include<iterator>
#include<map>
#include<set>
#include<list>
#include<unordered_map>
using namespace std;

template<typename T>
void readFileToMap(T &map, const string &fileName){
	ifstream ifs(fileName);
	string first, second;
	while (ifs >> first){
		ifs >> second;
		map.insert({ first, second });
	}
}

template<typename T>
void printMap(const T &map){
	for (auto i : map){
		cout << i.first << "\t" << i.second << endl;
	}
}

vector<string> split(const string &str, const string &separator);

#endif