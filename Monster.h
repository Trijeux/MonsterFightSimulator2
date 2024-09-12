#ifndef MONSTER_H
#define MONSTER_H
#include <string>

class Monster
{
public:
	Monster(const std::string& name_monster, const int hp, const int ap, int dp, int sp);
	~Monster();
protected:
private:
	std::string name_monster_;
	int hp_monster_ = 0;
	int ap_monster_ = 0;
	int dp_monster_ = 0;
	int sp_monster_ = 0;
};

#endif // MONSTER_H
