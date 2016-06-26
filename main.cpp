// hexagonProject.cpp : Defines the entry point for the console application.

#include <functional>
#include <iostream>
#include <string>
#include <vector>
#include <SFML/Graphics.hpp>

#include "RegisterForInput.h"
#include "DetectUserInput.h"
#include <cassert>
using namespace std;

int main() 
{
	sf::RenderWindow window(sf::VideoMode(1000, 700), "SFML - Hexagon");

	DetectUserInput	m_detectUserInput;	

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