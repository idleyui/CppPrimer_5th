#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Scree.h"

class Window_mgr {
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex);

private:
	std::vector<Screen> screen{ Screen(24, 80, ' ') };
};
void Window_mgr::clear(ScreenIndex i) {
	Screen &s = screen[i];
	s.contents = std::string(s.height * s.width, ' ');
}