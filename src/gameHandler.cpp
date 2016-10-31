//
// Created by Laurenz on 31/10/2016.
//

#include "gameHandler.hpp"

#include <iostream>
#include <algorithm>

#define MAX_TRY 6

gameHandler::gameHandler()
{
	won = false;

	neededTries = 0;
	wrongGuesses = 0;
	rightGuesses = 0;

	guessedChar = '0';

	guessingString = "";
}

gameHandler::~gameHandler()
{
}

void gameHandler::playGame(inputHandler input)
{
	int leftTries = 1;

	system("cls");
	std::cout << "The word contains " << input.input.size() << " letters.\n";
	std::cout << "Left tries: " << 7 - leftTries << '\n';
	guessingString = input.input;

	//Replace all letters with '_'
	for (int i = 0; i < guessingString.size(); i++)
		guessingString[i] = '_';

	while ((leftTries <= MAX_TRY) && (guessingString != input.input)) {
		bool guessedLetter = true;

		while ((guessedLetter) && (guessingString != input.input)) {
			std::cout << "Guess a letter!: ";
			std::cin >> guessedChar;

			std::string s(1, guessedChar);

			if (input.input.find(s) != std::string::npos) {
				std::cout << "\nThis letter has an occurence!\n";

				for (int w = 0; w < input.input.size(); w++) {
					if (input.input[w] == guessedChar)
						guessingString[w] = guessedChar;
				}

				printProgress(leftTries);

				rightGuesses++;
				neededTries++;
			}
			else {
				std::cout << "\This letter doesn't have an occurence!\n";
				leftTries++;
				printProgress(leftTries);

				neededTries++;
				guessedLetter = false;
				wrongGuesses++;
			}
		}
	}

	if (guessingString == input.input)
		won = true;
	else {
		won = false;
		guessingString = input.input;
	}
}

void gameHandler::printProgress(int leftTries)
{
	std::cout << "Current progress: " << guessingString << "\n";
	std::cout << "Left tries: " << 7 - leftTries << "\n\n";
}