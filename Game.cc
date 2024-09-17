#include "game.h"

#include <iostream>
#include <Windows.h>



Game::Game()
{
	std::cout << "Hello, welcome to Monster Fight Simulator!" << std::endl << std::endl;
	std::cout << "The goal is for you to choose your";
	ChangeColorMessage(" monstre ", 11);
	std::cout << "and your";
	ChangeColorMessage(" opponent ", 12);
	std::cout << "." << std::endl << std::endl;
	std::cout << "You will battle (everything is automated) and see who emerges victorious!" << std::endl << std::endl;
}

void Game::GameLoop()
{
	Monster monster_a;
	Monster monster_b;

	monster_a = ChoiceMonster(1);
	monster_a.AddColor(11);

	monster_b = ChoiceMonster(2);
	monster_b.AddColor(12);

	MonsterStat(monster_a);
	MonsterStat(monster_b);

	/*do
	{
		

		EndGame();
	} while (retry_);*/
}

void Game::ChangeColorMessage(const std::string_view& message, const int color)
{
	const HANDLE terminal = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(terminal, color);
	std::cout << message;
	SetConsoleTextAttribute(terminal, 15);
}

void Game::EndRound()
{
	std::cout << "Round : " << round_ << " End" << std::endl;
	round_++;
	//std::cout << "Next Round : " << round_ << std::endl;
}

void Game::MonsterStat(const Monster& monster)
{
	std::cout << "Name : ";

	ChangeColorMessage(monster.NameMonster(), monster.Color());

	std::cout << " HP : " << monster.HpMonster() <<
		" Attack : " << monster.ApMonster() << " Defence : " <<
		monster.DpMonster() << " Speed : " << monster.SpMonster() << std::endl;
}

Monster Game::ChoiceMonster(int monster)
{
	int choice_monster = 0;
	bool input_valid = false;

	do
	{
		if (monster == 1)
		{
			std::cout << "Choice your first monster : " << std::endl;
		}
		else
		{
			std::cout << "Choice your second monster : " << std::endl;
		}

		std::cout << 
			"(1) Orc" << std::endl <<
			"(2) Troll" << std::endl <<
			"(3) Goblin" << std::endl <<
			"(4) Centaur" << std::endl <<
			"(5) Werewolf" << std::endl <<
			"(6) Elf" << std::endl <<
			"(7) Harpy" << std::endl <<
			"(8) Salamander" << std::endl <<
			"(9) Demon" << std::endl <<
			"(10) Slime" << std::endl <<
			"(11) Minotaur" << std::endl <<
			"(12) DarkMage" << std::endl <<
			"(13) TheGrimReaper" << std::endl;

		std::cin >> choice_monster;

		if (std::cin.fail())
		{
			std::cin.clear();
			//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cin.ignore(2, '\n');
			std::cout << "Between invalid" << std::endl << std::endl;
		}
		else
		{
			if (choice_monster > 0)
			{
				choice_monster--;
				input_valid = true;
			}
			else
			{
				std::cin.clear();
				std::cin.ignore(2, '\n');
				std::cout << "Between invalid" << std::endl << std::endl;
			}
		}
	} while (!input_valid);

	Monster orc;
	Monster troll;
	Monster goblin;
	Monster centaur;
	Monster werewolf;
	Monster elf;
	Monster harpy;
	Monster salamander;
	Monster demon;
	Monster slime;
	Monster minotaur;
	Monster dark_mage;
	Monster the_grim_reaper;

	switch (choice_monster)
	{
	case kOrc:
		orc.Creat("Orc", 769, 36, 14, 33, false);
		return orc;
	case kTroll:
		troll.Creat("Troll", 1000, 50, 25, 7, false);
		return troll;
	case kGoblin:
		goblin.Creat("Goblin", 250, 28, 13, 48, false);
		return goblin;
	case kCentaur:
		centaur.Creat("Centaur", 625, 25, 15, 83, false);
		return centaur;
	case kWerewolf:
		centaur.Creat("Werewolf", 714, 25, 10, 91, false);
		return centaur;
	case kElf:
		centaur.Creat("Elf", 500, 25, 13, 74, true);
		return centaur;
	case kHarpy:
		centaur.Creat("Harpy", 667, 29, 6, 71, true);
		return centaur;
	case kSalamander:
		centaur.Creat("Salamander", 800, 25, 25, 40, false);
		return centaur;
	case kDemon:
		centaur.Creat("Demon", 667, 28, 20, 90, true);
		return centaur;
	case kSlime:
		centaur.Creat("Slime", 500, 10, 20, 100, false);
		return centaur;
	case kMinotaur:
		centaur.Creat("Minotaur", 870, 45, 22, 80, false);
		return centaur;
	case kDarkMage:
		centaur.Creat("Dark Mage", 500, 33, 10, 90, true);
		return centaur;
	case kTheGrimReaper:
		centaur.Creat("The Grim Reaper", 1000, 50, 25, 100, true);
		return centaur;
	}
}

void Game::EndGame()
{
	char player_choice;
	bool valid_input = false;
	do
	{
		std::cout << "Do you want to fight again ? ";

		std::cin >> player_choice;

		if (player_choice == 'n' || player_choice == 'N')
		{
			retry_ = false;
			valid_input = true;
		}
		else if (player_choice == 'y' || player_choice == 'Y')
		{
			retry_ = true;
			valid_input = true;
		}
		else
		{
			std::cout << "Input is invalid" << std::endl;
		}
	} while (!valid_input);
}


