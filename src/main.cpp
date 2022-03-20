#include <iostream>
#include <SFML/Graphics.hpp>

#include "Simulation.h"

int main() 
{
	Simulation game(1080, 1000, "Title");

	while (game.is_open())
	{
		game.update();
		game.render();
	}

	return 0;
}
