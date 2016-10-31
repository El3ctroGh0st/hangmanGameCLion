//
// Created by Laurenz on 31/10/2016.
//

#include "outputHandler.hpp"

#include <iostream>

outputHandler::outputHandler()
{
}

outputHandler::~outputHandler()
{
}

void outputHandler::printWelcomeMessage()
{
	std::cout << "Welcome to Hangman, a project created by Laurenz!\n";
	std::cout
		<< "Hangman is a guessing game, where Person1 selects an english word, which must then be guessed by Player2.\n";
	std::cout << "There are only a few rules:\n";
	std::cout << "Rule 1: You may only guess 1 letter at a time.\n";
	std::cout << "Rule 2: You only have six tries to guess the word.\n";
	std::cout << "Rule 3: If you can't guess the word in time, you lose. Otherwise you win.\n";
	std::cout << "Rule 4: You may only enter lower case letters. (Working on a fix)";

	std::cout << "That's everything! Have fun!\n\n";
}

void outputHandler::printLeaveMessage(gameHandler game)
{
	if (game.won) {
		std::cout << "Congratulations, you won the game!\n";
		std::cout << "Here are some statistics:\n";
		std::cout << "Number of tries to guess the correct word: " << game.neededTries << '\n';
		std::cout << "Number of right guesses: " << game.rightGuesses << '\n';
		std::cout << "Number of wrong guesses: " << game.wrongGuesses << '\n';
		std::cout << "Thanks for playing the game, I hoped you enjoyed it!\n";
	}
	else {
		std::cout << "Sorry, you lost the game! Better luck next time!\n";
		std::cout << "Here are some statistics:\n";
		std::cout << "Number of right guesses: " << game.rightGuesses << '\n';
		std::cout << "Number of wrong guesses: " << game.wrongGuesses << '\n';
		std::cout << "The correct word was: " << game.guessingString << '\n';
		std::cout << "Thanks for playing the game, I hoped you enjoyed it!\n";
	}
}
