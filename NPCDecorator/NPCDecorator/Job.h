#pragma once
#include "NPC.h"
class Job :
	public NPC
{
	NPC* npc;
public:
	Job(NPC* c);
	virtual void render();
};

