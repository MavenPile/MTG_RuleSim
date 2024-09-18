#include "Zones.h"
#include "Card.h"
#include "Player.h"

namespace MTG_Zone
{
	void Battlefield::Enters(MTG_Card::Card* _card, Zone* _zone)	{
		for (MTG_Card::Card* c : m_cards) {
			c->EntersTrigger(_card);
		}
	}

	void Battlefield::Leaves(MTG_Card::Card* _card, Zone* _zone)	{

	}
}