#ifndef MONSTER_H
#define MONSTER_H
#include <string>

class Monster
{
public:
	Monster(std::string, int, int, int, int, int);
	~Monster();

	std::string NameMonster() const { return name_monster_; }
	int HpMonster() const { return hp_monster_; }
	int ApMonster() const { return ap_monster_; }
	int DpMonster() const { return dp_monster_; }
	int SpMonster() const { return sp_monster_; }
	int Color() const { return color_; }

protected:
private:
	std::string name_monster_;
	int hp_monster_ = 0;
	int ap_monster_ = 0;
	int dp_monster_ = 0;
	int sp_monster_ = 0;
	int color_ = 0;
};

#endif // MONSTER_H
