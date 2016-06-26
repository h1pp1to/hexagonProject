// hexagonProject.cpp : Defines the entry point for the console application.

#include <functional>
#include <iostream>
#include <string>
#include <vector>
#include <SFML/Graphics.hpp>

#include "RegisterForInput.h"
#include "DetectUserInput.h"
#include "NotifyRegisteredForInput.h"

using namespace std;

void testMouse_1()
{
	int debug = 10;
}
void testMouse_2()
{
	int debug = 10;
}

void testKeyboard_1()
{
	int debug = 10;
}
void testKeyboard_2()
{
	int debug = 10;
}

int main()
{
	sf::RenderWindow window(sf::VideoMode(700, 500), "SFML - Hexagon");

	RegisterForInput			m_registerForInput;
	DetectUserInput				m_detectUserInput;		
	NotifyRegisteredForInput	m_notifyForInput;

	m_detectUserInput.SetWhoToNotify(&m_notifyForInput);
	m_notifyForInput.AccesToRegistered(&m_registerForInput);

	m_registerForInput.RegisterForUserInput(sf::Event::MouseButtonPressed, testMouse_1);
	m_registerForInput.RegisterForUserInput(sf::Event::MouseButtonPressed, testMouse_2);
	m_registerForInput.RegisterForUserInput(sf::Event::KeyPressed, testKeyboard_1);
	m_registerForInput.RegisterForUserInput(sf::Event::KeyPressed, testKeyboard_2);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}

			m_detectUserInput.CheckForUserInput(event);
		}

		window.clear();
		window.display();
	}

	return 0;
}