#include "Farmer.h"
#include <iostream>

Farmer::Farmer(NPC * n) : Job(n) {}

void Farmer::render() 
{
	Job::render();
	std::cout << "Farmer." << std::endl;
}