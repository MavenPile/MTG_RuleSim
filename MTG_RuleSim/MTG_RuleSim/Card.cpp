#include "Card.h"
#include "Zone.h"

namespace MTG
{
	void Card::Cast() {
		//	Put onto the stack
	}

	void Card::Play() {
		//	Mostly used by lands, to put them directly onto the battlefield
		//	Some cards allow you to play cards, in which case they need to use the Cast method
	}
	
	void Card::Resolve(Zone* targetZone)	{
		//	Tell target zone this card is entering it
		targetZone->CardEnters(this, m_currentZone);

		//	Leave preivous zone
		m_currentZone->CardLeaves(this, targetZone);

		//	Update current zone
		m_currentZone = targetZone;
	}
}