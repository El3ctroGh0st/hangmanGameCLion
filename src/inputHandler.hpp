//
// Created by Laurenz on 31/10/2016.
//

#ifndef HANGMANGAMECLION_INPUTHANDLER_HPP
#define HANGMANGAMECLION_INPUTHANDLER_HPP


#include <string>

class inputHandler
{
private:
	bool containsNumber;
public:
	std::string input;

	inputHandler();
	~inputHandler();

	void getInput();
};


#endif //HANGMANGAMECLION_INPUTHANDLER_HPP
