#include <iostream>
#include <SFML/Graphics.hpp>

#include "Game.h"

int main() 
{
	Game game;

	while (game.window_is_open())
	{
		game.update();
		game.render();
	}

	std::cout << "Hello World" << std::endl;

	return 0;
}
