#pragma once
#include <memory>
#include <string>

#include "Simulation.h"

const int WIDTH = 1080;
const int HEIGHT = 720;
const std::string TITLE = "Snake";

class Game
{
public:

	//Constructor
	Game();
	~Game();

	//update
	void update();

	//render
	void render();
	bool window_is_open();


private:

	std::unique_ptr<Simulation> simulation;
};

