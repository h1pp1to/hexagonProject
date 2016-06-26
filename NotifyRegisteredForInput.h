#pragma once

#include "RegisterForInput.h"
#include <memory>

class NotifyRegisteredForInput
{
private:
	RegisterForInput* m_registerForInputPtr;
public:
	NotifyRegisteredForInput();
	~NotifyRegisteredForInput();

	void AccesToRegistered(RegisterForInput* registerForInput);

	void NotifyRegisteredForEventType(sf::Event::EventType eventType);
};