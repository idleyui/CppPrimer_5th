#ifndef WINDOW_MGR_H
#define WINDOW_MGR_H
#include<vector>
#include<iostream>
#include<string>
#include"Screen.h"
using namespace std;

extern class Screen;
class Window_mgr{
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex);
private:
	vector<Screen> screens{ Screen(24, 80, ' ') };
};

void Window_mgr::clear(ScreenIndex i){
	Screen &s = screens[i];
	s.contents = std::string(s.height * s.width, ' ');
}
#endif