#ifndef MONSTER_H
#define MONSTER_H
#include <string>

class Monster
{
public:
	Monster() = default;
	~Monster();

	void Creat(std::string_view, int, int, int, int, bool);
	void AddColor(int);

	[[nodiscard]] std::string_view NameMonster() const { return name_monster_; }
	[[nodiscard]] int HpMonster() const { return hp_monster_; }
	[[nodiscard]] int ApMonster() const { return ap_monster_; }
	[[nodiscard]] int DpMonster() const { return dp_monster_; }
	[[nodiscard]] int SpMonster() const { return sp_monster_; }
	[[nodiscard]] int Color() const { return color_; }
	[[nodiscard]] bool IsWizzard() const { return is_wizzard_; }

protected:
private:
	std::string name_monster_;
	int hp_monster_ = 0;
	int ap_monster_ = 0;
	int dp_monster_ = 0;
	int sp_monster_ = 0;
	int color_ = 0;
	bool is_wizzard_ = false;

	int hp_bouns_monster_ = 0;
	int ap_bouns_monster_ = 0;
	int dp_bouns_monster_ = 0;
	int sp_bouns_monster_ = 0;
};

#endif // MONSTER_H
