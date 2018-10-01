#pragma once
#include "Job.h"
class Shaman :
	public Job
{
public:
	Shaman(NPC* n);

	void render();
};