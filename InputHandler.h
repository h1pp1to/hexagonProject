#pragma once

#include <SFML/Graphics.hpp>
#include <memory>

namespace userInput
{
class InputHandler
{
private:
	sf::Event m_event;

public:
	InputHandler();
	~InputHandler();

	void CheckForUserInput(sf::Event event);
};

}; // userInput