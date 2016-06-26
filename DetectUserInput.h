#pragma once
#include <SFML\Graphics.hpp>

class DetectUserInput
{
private:

public:
	DetectUserInput();
	~DetectUserInput();

	void CheckForUserInput(sf::Event event);
};

