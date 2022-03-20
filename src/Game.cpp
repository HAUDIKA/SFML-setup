#include "Game.h"

Game::Game():
	Simulation(1000, 1000, "Title")
{

}

Game::~Game()
{
}

void Game::update()
{
	Simulation::update();
}

void Game::render()
{
	Simulation::render();
}
