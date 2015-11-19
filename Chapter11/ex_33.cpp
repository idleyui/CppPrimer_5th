#include"chapter11.h"

void word_transform(const string &filename, const string &rules = "test_33_rules.txt"){
	//make the rules map
	ifstream ifrule(rules);
	map<string, string> rulesmap;
	string min, tran;
	while (!ifrule.eof()){
		ifrule >> min;
		getline(ifrule, tran);
		tran.erase(tran.begin());
		if (rulesmap.find(min) != rulesmap.end()){
			cout << "double define rules" << endl;
			break;
		}
		rulesmap[min] = tran;
	}
	printMap(rulesmap);

	//trans text
	ifstream ifs(filename);
	string tranfile = "tran_" + filename;
	ofstream ofs(tranfile);
	string word;
	while (!ifs.eof()){
		getline(ifs, word);
		vector<string> vec = split(word, " ");
		auto iter = vec.begin();
		while (iter != vec.end()){
			if (rulesmap.find(*iter) == rulesmap.end()){
				ofs << *iter;
			}
			else{
				ofs << rulesmap[*iter];
			}
			if (iter++ + 1 != vec.end())
				ofs << " ";
		}
		ofs << endl;
	}
}

//int main(){
//	word_transform("test_33_words.txt");
//	getchar();
//}