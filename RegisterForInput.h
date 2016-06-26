#pragma once

#include <vector>
#include <functional> 
#include <utility>
#include <SFML/Graphics.hpp>

typedef std::function<void()> VoidFuncNoArgs;
typedef std::pair<sf::Event::EventType, VoidFuncNoArgs> InputEventToFunctionPair;

class RegisterForInput
{
private:
	RegisterForInput() = default;
	~RegisterForInput() = default;
	std::vector<InputEventToFunctionPair> m_functionContainer;
public:
	
	RegisterForInput(const RegisterForInput &) = delete;
	RegisterForInput &operator = (const RegisterForInput &) = delete;

	static RegisterForInput& Get();

	void RegisterForUserInput(sf::Event::EventType eventType, VoidFuncNoArgs funcToCall);
	const std::vector<InputEventToFunctionPair> &GetFuncContainer() const;
};