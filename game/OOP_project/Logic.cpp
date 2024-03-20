#include "Logic.h"
Logic::Logic(std::vector<Character*> Persone, int PersoneID, int HEIGTH, int WIDTH) {
	this->Persone = Persone;
	this->PersoneID = PersoneID;
	this->HEIGTH = HEIGTH;
	this->WIDTH = WIDTH;
	//ClickEvent.push_back(new ClickEventHandler(Persone[PersoneID]->TakePosition(), HEIGTH, WIDTH));
	ClickEvent = new ClickEventHandler(Persone[PersoneID]->TakePosition(), HEIGTH, WIDTH);
	map.resize(HEIGTH, std::vector<int>(WIDTH, -1));
	for (int i = 1; i < HEIGTH - 1; i++) {
		for (int j = 1; j < WIDTH - 1; j++) {
			map[i][j] = 0;
		}
	}
}
void Logic::Draw() {
	system("cls");
	std::pair<int, int> position = *Persone[PersoneID]->TakePosition();
	for (int i = 0; i < HEIGTH; i++) {
		for (int j = 0; j < WIDTH; j++) {
			if (i == position.first && j == position.second) {
				std::cout << 'P';
				continue;
			}
			if (map[i][j] == -1)std::cout << '#';
			if (map[i][j] == 0)std::cout << ' ';
		}std::cout << '\n';
	}
}
void Logic::CheckClick() {
	ClickEvent->ClickEvent();
}
