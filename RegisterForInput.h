#pragma once

#include <vector>
#include <functional> 
#include <utility>
#include <SFML/Graphics.hpp>

typedef std::function<void()> VoidFuncNoArgs;
typedef std::pair<sf::Event::EventType, VoidFuncNoArgs> InputEventToFunctionPair;

class RegisterForInput
{
public:
	RegisterForInput();
	~RegisterForInput();

	void RegisterForUserInput(sf::Event::EventType eventType, VoidFuncNoArgs funcToCall);

	std::vector<InputEventToFunctionPair> m_functionContainer;
};

