#pragma once

#include <future>
#include <vector>
#include "UserInputDefines.h"

namespace uinput{

class UserInputRegister
{
private:
	typedef std::function<void()> voidFuncNoArguments;
	struct functionBinder
	{
		InputTypes inputType;
		voidFuncNoArguments functionToCall;

		functionBinder(InputTypes _inputType, voidFuncNoArguments _functionToCall)
			: inputType(_inputType)
			, functionToCall(_functionToCall)
		{}

	};

	//NOTE - This will work only for void functions with no arguments !!! 
	std::vector < functionBinder > m_functionContainer;

public:
	UserInputRegister();
	~UserInputRegister();

	void RegisterClient(InputTypes inputType, voidFuncNoArguments functionToBind)
	{
		m_functionContainer.push_back( functionBinder(inputType, functionToBind) );
	}
};

}; // user input

