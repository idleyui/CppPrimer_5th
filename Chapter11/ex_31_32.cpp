#include"Chapter11.h"

int main(){
	multimap<string, string> writer;
	readFileToMap(writer, "test_31.txt");
	string search_author = "two";
	string del = "one";
	for (pair<multimap<string, string>::iterator, multimap<string, string>::iterator> pair = writer.equal_range(search_author); pair.first != pair.second; ++pair.first){
		if (pair.first->second == "one")
			pair.first = writer.erase(pair.first);
	}
	printMap(writer);
	getchar();
}