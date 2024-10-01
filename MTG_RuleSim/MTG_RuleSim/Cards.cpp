#include "Cards.h"
#include "Card.h"
#include "Player.h"
#include "Zone.h"
#include "Types.h"

namespace MTG
{
	void Harness_Infinity::Resolve(Zone* targetZone) {
		//	Exchange your hand and graveyard.
		std::vector<Card*>* temp = m_controller->GetGraveyard()->GetStoredCards();
		m_controller->GetGraveyard()->SetStoredCards(m_controller->GetHand()->GetStoredCards());
		m_controller->GetHand()->SetStoredCards(temp);

		//	Exile Harness Infinity.
		NonPermanent::Resolve(m_owner->GetExile());
	}

	void Corpse_Knight::ElseEnters(Card* _card)
	{
		//	Whenever another creature enters the battlefield under your control
		if (_card != this && _card->CheckForCardType(new Creature) && _card->GetController() == m_controller) {
			//	Each opponent loses 1 life.
			for (Player* p : *m_controller->GetOpponents()) {
				p->SetLife(p->GetLife() - 1);
			}
		}
	}
}