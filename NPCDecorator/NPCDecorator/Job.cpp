#include "Job.h"


Job::Job(NPC* c)
{
	npc = c;
}

void Job::render() 
{
	npc->render();
}