#include "RegisterForInput.h"


RegisterForInput::RegisterForInput()
{
}


RegisterForInput::~RegisterForInput()
{
}

void RegisterForInput::RegisterForUserInput(sf::Event::EventType eventType, VoidFuncNoArgs funcToCall)
{
	InputEventToFunctionPair eventToFunction;
	eventToFunction.first = eventType;
	eventToFunction.second = funcToCall;

	m_functionContainer.push_back(eventToFunction);
}