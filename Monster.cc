#include "Monster.h"

#include <iostream>

Monster::Monster(std::string name_monster, const int hp, const int ap, const int dp, const int sp, int color) :
name_monster_(std::move(name_monster)), hp_monster_(hp), ap_monster_(ap),
dp_monster_(dp), sp_monster_(sp), color_(color)
{}

Monster::~Monster()
{
	//std::cout << "Monster Destroy";
}
