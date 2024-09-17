#include "monster.h"

#include <iostream>

Monster::~Monster()
{
	//std::cout << "Monster Destroy" << std::endl;
}

void Monster::Creat(const std::string_view name_monster, const int hp,
	const int ap, const int dp, const int sp, const bool wizzard)
{
	name_monster_ = name_monster;
	hp_monster_ = hp;
	ap_monster_ = ap;
	dp_monster_ = dp;
	sp_monster_ = sp;
	is_wizzard_ = wizzard;
}

void Monster::AddColor(const int color)
{
	color_ = color;
}
