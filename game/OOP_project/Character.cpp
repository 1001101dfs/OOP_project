#include "Character.h"
double Character::TakeGrayHP() {
	return this->_GrayHP;
}
double Character::TakeReadHP() {
	return this->_RedHP;
}
double Character::TakeDamage() {
	return this->_Damage;
}
std::pair<int, int>* Character::TakePosition() {
	return &this->_Position;
}
Character::Character() {}