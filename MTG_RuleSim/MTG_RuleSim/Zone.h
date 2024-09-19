#pragma once
#include <vector>

namespace MTG
{
	class ZoneManager;
	class Player;
	class Card;
	
	class Zone
	{
		//	Zones typically have an owner, and contain a list of cards
		//	Some zones need to store this list of cards in a different way (like the stack)
		//	Zones have different rules about the visibility of the cards
	private:

	
	public:
		std::vector<Card*>& m_cards;
		ZoneManager* m_controller;

		virtual int CardCount() { return m_cards.size(); }

		virtual void CardEnters(Card* _card, Zone* fromZone) {}
		virtual void CardLeaves(Card* _card, Zone* toZone) {}
	};

	class Private_Zone : Zone
	{
	private:


	public:
		Player* m_owner;
	};

	class Shared_Zone : Zone
	{
	private:


	public:

	};
}