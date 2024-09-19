#include "Zones.h"
#include "Card.h"
#include "Player.h"

namespace MTG
{
	void Battlefield::CardEnters(Card* _card, MTG::Zone* _zone)	{
		for (Card* c : m_cards) {
			c->ElseEnters(_card);
		}
	}

	void Battlefield::CardLeaves(Card* _card, MTG::Zone* _zone)	{
		for (Card* c : m_cards) {
			c->ElseLeaves(_card);
		}
	}
}