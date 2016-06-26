#include "NotifyRegisteredForInput.h"


NotifyRegisteredForInput::NotifyRegisteredForInput(){}
NotifyRegisteredForInput::~NotifyRegisteredForInput(){}

void NotifyRegisteredForInput::AccesToRegistered(RegisterForInput* registerForInput)
{
	m_registerForInputPtr = registerForInput;
}

void NotifyRegisteredForInput::NotifyRegisteredForEventType(sf::Event::EventType eventType)
{
	for (const auto& it : m_registerForInputPtr->m_functionContainer)
	{
		if (eventType == it.first)
		{
			it.second(); // Call Function
		}
	}

}