#pragma once
#include "ClickEventHandler.h"
#include "Character.h"
#include <iostream>
#include <vector>

class Logic {
protected:
	ClickEventHandler* Click; 
	std::vector<Character*> Persone;
	int PersoneID;
	std::vector<std::vector<int>> map;
	int HEIGTH; 
	int WIDTH;
public:
	Logic(std::vector<Character*> Persone, int PersoneID, int HEIGTH, int WIDTH);
	void Draw();
	void CheckClick();
};
