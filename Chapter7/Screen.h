#ifndef SCREEN_H
#define SCREEN_H
#include<iostream>
#include<string>
//#include"Window_mgr.h"
using namespace std;

//extern class Window_mgr;
class Screen{
public:
	typedef std::string::size_type pos;

	Screen() = default;
	Screen(pos ht, pos wd) : height(ht), width(wd), contents(" "){}
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c){}

	char ger() const{ return contents[cursor]; }
	inline char get(pos ht, pos wd)const;
	Screen &move(pos r, pos c);
	Screen &set(char);
	Screen &set(pos, pos, char);
	Screen &display(std::ostream &os){
		do_display(os);
		return *this;
		os << contents;
	}
	const Screen &display(std::ostream &os) const{
		do_display(os);
		return *this;
	}
	void some_member() const;
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
	mutable int access_ctr;//can be changed even in a const class
	void do_display(std::ostream &os) const { os << contents; }
friend class Window_mgr;
friend void some_member();
};
void Screen::some_member() const{
	++access_ctr;
}
inline Screen &Screen::set(char c){
	contents[cursor] = c;
	return *this;
}
inline Screen &Screen::set(pos r, pos col, char ch){
	contents[r*width + col] = ch;
	return *this;
}
#endif