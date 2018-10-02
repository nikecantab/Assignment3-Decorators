#pragma once
#include "Job.h"
class Soldier :
	public Job
{
public:
	Soldier(NPC* n);

	void render();
};

