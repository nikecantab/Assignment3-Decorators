#include "Shaman.h"
#include <iostream>

Shaman::Shaman(NPC * n) : Job(n) {}

void Shaman::render()
{
	Job::render();
	std::cout << "Shaman." << std::endl;
}