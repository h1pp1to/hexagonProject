#include "DetectUserInput.h"


DetectUserInput::DetectUserInput(){}
DetectUserInput::~DetectUserInput(){}

void DetectUserInput::SetWhoToNotify(NotifyRegisteredForInput* toNotify)
{
	m_notifyFunctionsPtr = toNotify;
}

void DetectUserInput::CheckForUserInput(sf::Event event)
{
	m_notifyFunctionsPtr->NotifyRegisteredForEventType(event.type);

	/*if (event.type == sf::Event::KeyPressed)
	{
		m_notifyFunctionsPtr->NotifyRegisteredForEventType(sf::Event::KeyPressed);
	}

	if (event.type == sf::Event::MouseButtonPressed)
	{
		m_notifyFunctionsPtr->NotifyRegisteredForEventType(sf::Event::MouseButtonPressed);
	}*/
}
