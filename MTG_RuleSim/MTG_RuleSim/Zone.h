#pragma once
#include <vector>
#include "Card.h"
#include "Player.h"

//using namespace MTG_Card;
//using namespace MTG_Player;
//
//class MTG_Card::Card;
//class MTG_Player::Player;

namespace MTG_Zone
{
	class Zone
	{
		//	Zones typically have an owner, and contain a list of cards
		//	Some zones need to store this list of cards in a different way (like the stack)
		//	Zones have different rules about the visibility of the cards
	private:
		MTG_Player::Player* m_owner;
		std::vector<MTG_Card::Card*> m_cards;

	public:
		virtual int CardCount() { return m_cards.size(); }

		virtual void Enters(MTG_Card::Card* _card, Zone* _zone) {}
		virtual void Leaves(MTG_Card::Card* _card, Zone* _zone) {}
	};
}