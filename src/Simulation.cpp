#include "Simulation.h"

Simulation::Simulation(int init_width, int init_height, std::string init_title):
	window(std::make_unique<sf::RenderWindow>(sf::VideoMode(init_width, init_height), init_title)), event(sf::Event())
{
	this->window->setFramerateLimit(60);
}

Simulation::~Simulation()
{
}

void Simulation::update()
{
	//Reading events
	while (this->window->pollEvent(this->event))
	{
		if (this->event.type == sf::Event::Closed)
		{
			this->window->close();
		}
	}
}

void Simulation::render()
{
	this->window->clear(sf::Color::Black);

	this->window->display();
}

bool Simulation::is_open()
{
	return this->window->isOpen();
}
