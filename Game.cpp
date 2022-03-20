#include "Game.h"

Game::Game() :
	simulation(std::make_unique<Simulation>(WIDTH, HEIGHT, TITLE))
{
}

Game::~Game()
{
}

void Game::update()
{
	this->simulation->update();
}

void Game::render()
{
	this->simulation->render();
}

bool Game::window_is_open()
{
	return this->simulation->is_open();
}
