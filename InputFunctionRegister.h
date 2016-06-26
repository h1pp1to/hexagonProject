#pragma once

#include <vector>
#include <functional>
#include <utility>
#include <SFML/Graphics.hpp>

namespace userInput
{

class InputFunctionRegister
{
private:
	//TODO - avaible to work with any kind of functions
	//NOTE - this class will work only for void functions with no arguments
	typedef std::function<void()> VoidFuncNoArgs;
	typedef std::pair< sf::Event::EventType, InputFunctionRegister> EventTypeToFunction;
	std::vector< EventTypeToFunction > m_funcCointainer;
public:
	InputFunctionRegister();
	~InputFunctionRegister();

	void RegisterFunction(sf::Event::EventType inputType, VoidFuncNoArgs funcToCall);
	void CallFunctionByEventType(sf::Event::EventType inputType);
};

}; // userInput