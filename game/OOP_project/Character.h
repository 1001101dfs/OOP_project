#pragma once
#include <vector>
class Character
{
public:
	//void Shot();
	//void TakeItem();
	//void Move();
	//void TakeDamge();
	Character();
	double TakeGrayHP();
	double TakeReadHP();
	double TakeDamage();
	std::pair<int, int>* TakePosition();
protected:
	double _GrayHP;
	double _RedHP;	
	double _Damage;
	// add active item
	// add passive item
	std::pair<int, int> _Position;
};

