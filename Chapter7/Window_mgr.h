#ifndef WINDOW_MGR_H
#define WINDOW_MGR_H
#include<vector>
#include<iostream>
#include<string>
#include"Screen.h"
using namespace std;

class Screen;
class Window_mgr{
public:
	Window_mgr();
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex);
private:
	vector<Screen> screens;
};

Window_mgr::Window_mgr(){
	screens.push_back(Screen(24, 80, ' '));
}

void Window_mgr::clear(ScreenIndex i){
	Screen &s = screens[i];
	s.contents = std::string(s.height * s.width, ' ');
}
#endif