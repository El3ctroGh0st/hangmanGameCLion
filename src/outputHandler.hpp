//
// Created by Laurenz on 31/10/2016.
//

#ifndef HANGMANGAMECLION_OUTPUTHANDLER_HPP
#define HANGMANGAMECLION_OUTPUTHANDLER_HPP


#include "gameHandler.hpp"

class outputHandler
{
public:
	outputHandler();
	~outputHandler();

	void printWelcomeMessage();
	void printLeaveMessage(gameHandler);
};


#endif //HANGMANGAMECLION_OUTPUTHANDLER_HPP
