#pragma once
#include <vector>

namespace MTG
{
	class ZoneManager;
	class Player;
	class Card;
	
	class Zone
	{
		//	Zones contain a list of cards
		//	Zones can be private or shared
		//	The Zones are the Battlefield, Exile, Graveyard, Hand, Library, Stack, and Command
	protected:
		std::vector<Card*>* m_cards;
		ZoneManager* m_controller;
	
	public:
		~Zone();



		int GetCardCount() { return m_cards->size(); }

		std::vector<Card*>* GetStoredCards() { return m_cards; }
		void SetStoredCards(std::vector<Card*>* _cards) { m_cards = _cards; }

		virtual void CardEnters(Card* _card, Zone* fromZone) {}
		virtual void CardLeaves(Card* _card, Zone* toZone) {}
	};

	class Private_Zone : public Zone
	{
		//	Has an owner
	protected:
		Player* m_owner;

	public:
		Private_Zone(Player* _owner) : m_owner(_owner) {}

		Player* GetOwner() { return m_owner; }
	};

	class Shared_Zone : public Zone
	{
		//	Does not have an owner
	protected:


	public:

	};
}