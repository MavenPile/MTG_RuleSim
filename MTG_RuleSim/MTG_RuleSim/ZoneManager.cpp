#include "ZoneManager.h"
#include "Card.h"
#include "Zones.h"

namespace MTG
{
	void ZoneManager::Initialise(Player* _p1, Player* _p2, Player* _p3, Player* _p4)
	{
		m_stack = new Stack();
		m_battlefield = new Battlefield();
		m_exile = new Exile();
		m_command = new Command();
	}
}