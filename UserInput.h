#pragma once

namespace uinput{

class UserInput
{
private:

public:
	UserInput();

	void CheckForInput();
	void OnMouseClick_Left();
	void OnMouseClick_Right();
	void OnKeyboardPress();

	void NotifyClient();
};

}; // user input