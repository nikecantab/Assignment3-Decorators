#include "Soldier.h"
#include <iostream>

Soldier::Soldier(NPC * n) : Job(n) {}

void Soldier::render() 
{
	Job::render();
	std::cout << "Soldier." << std::endl;
}