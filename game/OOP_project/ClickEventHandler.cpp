#include "ClickEventHandler.h"
ClickEventHandler::ClickEventHandler(std::pair<int, int>* Position, int HEIGTH, int WIDTH) {
    this->Position = Position;
    this->HEIGTH = HEIGTH;
    this->WIDTH = WIDTH;
}
void ClickEventHandler::ClickEvent() {
    if (_kbhit()) {
        switch (_getch()) {
        case 'a': //вверх
            if (Position->second - 1 > 0)Position->second--;
            break;
        case 'w': //вниз
            if (Position->first - 1 > 0)Position->first--;
            break;
        case 's': //влево 
            if (Position->first + 1 < HEIGTH)Position->first++;
            break;
        case 77: //вправо
            if (Position->second + 1 < WIDTH)Position->second++;
            break;
        }
    }
}