#include "Game.h"

#include <iostream>
#include <windows.h>

#include "Monster.h"

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
	do
	{
		
	}
	while (retry_);
}


void Game::ChangeColorMessage(const std::string& message, const int color)
{
	const HANDLE terminal = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(terminal, color);
	std::cout << message;
	SetConsoleTextAttribute(terminal, 15);
}


