//
// Created by Laurenz on 31/10/2016.
//

#ifndef HANGMANGAMECLION_GAMEHANDLER_HPP
#define HANGMANGAMECLION_GAMEHANDLER_HPP


#include "inputHandler.hpp"

class gameHandler
{
private:
public:
	gameHandler();
	~gameHandler();

	bool won;

	int neededTries;
	int wrongGuesses;
	int rightGuesses;

	std::string guessingString;

	char guessedChar;

	void playGame(inputHandler);
	void printProgress(int);
};


#endif //HANGMANGAMECLION_GAMEHANDLER_HPP
