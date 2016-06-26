#include "InputFunctionRegister.h"


namespace userInput
{
	InputFunctionRegister::InputFunctionRegister(){}
	InputFunctionRegister::~InputFunctionRegister(){}

	void InputFunctionRegister::RegisterFunction(sf::Event::EventType inputType, VoidFuncNoArgs funcToCall)
	{
		EventTypeToFunction eventTypeToFunction;
		eventTypeToFunction.first = inputType;
		eventTypeToFunction.second = funcToCall;

		m_funcCointainer.push_back(eventTypeToFunction);
	}

	void InputFunctionRegister::CallFunctionByEventType(sf::Event::EventType inputType)
	{
		//NOTE - call only functions that match inputType
		for (const auto& it : m_funcCointainer)
		{
			if (it.first == inputType)
			{
				it.second; // Call Function
			}
		}
	}

}; // userInput