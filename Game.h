#ifndef GAME_H
#define GAME_H
#include <string>
#include "monster.h"


class Game
{
public:
	Game(); // Welcome / Rule

	void GameLoop();


protected:
private:
	enum MonsterRace
	{
		kOrc,
		kTroll,
		kGoblin,
		kCentaur,
		kWerewolf,
		kElf,
		kHarpy,
		kSalamander,
		kDemon,
		kSlime,
		kMinotaur,
		kDarkMage,
		kTheGrimReaper,
		kTrolling,
		kMax
	};

	enum class RandStat
	{
		kAttack,
		kDefense,
		kSpeed,
	};

	bool retry_ = true;
	int round_ = 0;

	static void ChangeColorMessage(const std::string_view&, int);
	void EndRound();
	static void MonsterStat(const Monster&);
	Monster ChoiceMonster(int);
	int CombatRound(Monster&, Monster&, int);
	void EndGame();
};

#endif // GAME_H
