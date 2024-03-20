#pragma once
#include <vector>
#include <windows.h>
#include <conio.h>
class ClickEventHandler {
private:
	std::pair<int, int>* Position;
	int HEIGTH;
	int WIDTH;
public:
	ClickEventHandler(std::pair<int, int>* Position, int HEIGTH, int WIDTH);
	void ClickEvent();
};

