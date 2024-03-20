#include "Issac.h"
#include "Character.h"
#include "Logic.h"
#include <iostream>
#include <Windows.h>
const int WIDTH = 100;
const int HEIGTH = 30;

int inputInt(int m = 1, int M = 3) {
	int N;
	while (true) {
		if ((std::cin >> N).good() && (m <= N) && (N <= M)) break;
		system("cls");
		if (std::cin.fail()) {
			std::cin.clear();
			std::cout << "Неверный ввод, повторите.\n";
		}
		else {
			std::cout << "Число вне допустимого диапазона значений. Повторите ввод.\n";
		}
		std::cin.ignore(100, '\n');
		return -1;
	}
	return N;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// выбор персонажа
	int PersoneID = -1;
	std::vector<Character*> Persone;
	Persone.push_back(new Issac());
	while (PersoneID == -1) {
		std::cout << "Выберете персонажа: \n";
		std::cout << "1) Issac\n";
		PersoneID = inputInt() - 1;
	}
	
	Logic logic(Persone, PersoneID, HEIGTH, WIDTH);
	system("cls");
	while (true) {
		logic.Draw();
		Sleep(500);
	}
}