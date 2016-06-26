#pragma once
#include "NotifyRegisteredForInput.h"
#include <memory>

class DetectUserInput
{
private:
	NotifyRegisteredForInput* m_notifyFunctionsPtr;
public:
	DetectUserInput();
	~DetectUserInput();

	void SetWhoToNotify(NotifyRegisteredForInput* toNotify);

	void CheckForUserInput(sf::Event event);
};

