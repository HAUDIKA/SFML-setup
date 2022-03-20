#pragma once

#include <SFML/Graphics.hpp>
#include <memory>


class Simulation
{
public:

	//Constructor
	Simulation(int width, int height, std::string title);
	~Simulation();


	//Update
	void update();

	//Render
	void render();

	//helper
	bool is_open();


private:

	std::shared_ptr<sf::RenderWindow> window;
	sf::Event event;
};

