#pragma once
#include <string>

class NPC
{
public:
	NPC();
	virtual void render() = 0;
	std::string name;
};

