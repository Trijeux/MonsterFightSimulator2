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

int Monster::HpDown(int attack)
{
	if (dp_monster_ >= attack)
	{
		std::cout << "Attack fail" << std::endl;
		return 0;
	}
	else
	{
		hp_monster_ -= attack - dp_monster_;
		return attack - dp_monster_;
	}
}
