#include "Library.h"
#include "Card.h"
#include "Player.h"
#include "Zone.h"

namespace MTG
{
	void Harness_Infinity::Resolve(Zone* targetZone) {
		//	Exchange your hand and graveyard.
		std::vector<Card*>& temp = m_controller->GetGraveyard().m_cards;
		m_controller->GetGraveyard().m_cards = m_controller->GetHand().m_cards;
		m_controller->GetHand().m_cards = temp;

		//	Exile Harness Infinity.
		NonPermanent::Resolve(&m_owner->GetExile());
	}

	void Corpse_Knight::ElseEnters(Card* _card)
	{
		//	Whenever another creature enters the battlefield under your control
		if (_card != this && _card->t_isCreature && _card->m_controller == m_controller) {
			//	Each opponent loses 1 life.
			for (Player* p : m_controller->GetOpponents()) {
				p->SetHealth(p->GetHealth() - 1);
			}
		}
	}
}