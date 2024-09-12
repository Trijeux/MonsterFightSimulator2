#include "Monster.h"

#include <iostream>

Monster::Monster(const std::string& name_monster, const int hp, const int ap, int dp, int sp) :
name_monster_(name_monster), hp_monster_(hp), ap_monster_(ap), dp_monster_(dp), sp_monster_(sp)
{}

Monster::~Monster()
{
	//std::cout << "Monster Destroy";
}
