//
// Created by Laurenz on 31/10/2016.
//

#include <cstdlib>

#include "hangmanGame.hpp"

#include "inputHandler.hpp"
#include "outputHandler.hpp"

//Entry point
int main()
{
	hangmanGame hangman;

	hangman.play(hangman);
	system("PAUSE");
}

hangmanGame::hangmanGame()
{
}

hangmanGame::~hangmanGame()
{
}

void hangmanGame::play(hangmanGame &hangman)
{
	inputHandler input;
	outputHandler output;
	gameHandler game;

	output.printWelcomeMessage();
	input.getInput();

	game.playGame(input);

	output.printLeaveMessage(game);
}