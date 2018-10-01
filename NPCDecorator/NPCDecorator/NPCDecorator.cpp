#include <vector>

#include "NPC.h"
#include "Orc.h"
#include "Elf.h"
#include "Farmer.h"
#include "Soldier.h"
#include "Shaman.h"

void renderAll(std::vector<NPC*> npcs) 
{
	for (auto& npc : npcs) 
	{
		npc->render();
	}

}

int main()
{
	std::vector<NPC*> npcs;

	NPC* soldierOrc = new Soldier(new Orc("Qwerty"));
	npcs.push_back(soldierOrc);
	NPC* farmerOrc = new Farmer(new Orc("Azerty"));
	npcs.push_back(farmerOrc);
	NPC* shamanOrc = new Shaman(new Orc("Dvorak"));
	npcs.push_back(shamanOrc);

	NPC* soldierElf = new Soldier(new Elf("Eehh"));
	npcs.push_back(soldierElf);
	NPC* farmerElf = new Farmer(new Elf("Uhhh"));
	npcs.push_back(farmerElf);
	NPC* shamanElf = new Shaman(new Elf("Hhahhh"));
	npcs.push_back(shamanElf);

	renderAll(npcs);

	delete soldierOrc;
	delete farmerOrc;
	delete shamanOrc;
	delete soldierElf;
	delete farmerElf;
	delete shamanElf;

	while (1) 
	{

	}

	return 0;
}