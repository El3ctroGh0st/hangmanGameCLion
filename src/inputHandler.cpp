//
// Created by Laurenz on 31/10/2016.
//

#include "inputHandler.hpp"

#include <iostream>
#include <algorithm>

inputHandler::inputHandler()
{
	input = "";
	containsNumber = true;
}

inputHandler::~inputHandler()
{
}

void inputHandler::getInput()
{
	std::string in;

	while (containsNumber) {
		std::cout << "Enter a word: ";
		std::cin >> in;
		if (std::any_of(in.begin(), in.end(), ::isdigit))
			std::cout << "The word must not contain a number!\n";
		else
			containsNumber = false;
	}

	input = in;
}
