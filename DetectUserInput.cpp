#include "DetectUserInput.h"
#include "RegisterForInput.h"

DetectUserInput::DetectUserInput(){}
DetectUserInput::~DetectUserInput(){}

void DetectUserInput::CheckForUserInput(sf::Event event)
{
	//NOTE - notify all registered functions for handeled eventType
	for (const auto& it : RegisterForInput::Get().GetFuncContainer())
	{
		if (event.type == it.first)
		{
			it.second(); // Call function
		}
	}
}
