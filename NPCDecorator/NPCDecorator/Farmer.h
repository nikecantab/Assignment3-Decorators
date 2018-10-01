#pragma once
#include "Job.h"
class Farmer :
	public Job
{
public:
	Farmer(NPC* n);

	void render();
};

