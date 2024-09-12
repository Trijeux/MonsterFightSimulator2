#ifndef GAME_H
#define GAME_H
#include <string>


class Game
{
public:
	Game(); // Welcome / Rule

	void GameLoop();
protected:
private:

	bool retry_ = true;
	int round_ = 0;

	static void ChangeColorMessage(const std::string&, int);
	void EndRound();
	void MonsterStat();
	void ChoiceMonster();
	void EndGame();
};

#endif // GAME_H
