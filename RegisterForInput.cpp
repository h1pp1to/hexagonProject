#include "RegisterForInput.h"

void RegisterForInput::RegisterForUserInput(sf::Event::EventType eventType, VoidFuncNoArgs funcToCall)
{
	InputEventToFunctionPair eventToFunction;
	eventToFunction.first = eventType;
	eventToFunction.second = funcToCall;

	m_functionContainer.push_back(eventToFunction);
}

RegisterForInput &RegisterForInput::Get()
{
	static RegisterForInput registerInstance;
	return registerInstance;
}

const std::vector<InputEventToFunctionPair> &RegisterForInput::GetFuncContainer() const
{
	return m_functionContainer;
}