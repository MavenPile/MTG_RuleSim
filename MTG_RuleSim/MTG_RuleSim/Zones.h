#pragma once
#include <vector>
#include "Zone.h"

namespace MTG
{
	class Battlefield : public Zone
	{
		//	All cards are public to all players
		//	Some cards may be face-down, known only to the owning(?) player
	private:
		std::vector<Card*> m_cards;


	public:
		virtual void CardEnters(Card* _card, Zone* _zone) override;
		virtual void CardLeaves(Card* _card, Zone* _zone) override;
	};

	class Graveyard : public Zone
	{
		//	All cards are public to all players
	private:


	public:

	};

	class Hand : public Zone
	{
		//	All cards are private to other players
		//	Some cards may be revealed to some/all other players
	private:

	public:

	};

	class Exile : public Zone
	{
		//	All cards are public to all players
		//	Some cards may be face down, only known to the owning(?) player
	private:


	public:

	};

	class Library : public Zone
	{
		//	All cards are private to all players
		//	Some cards may be revealed to some/all players
	private:
		std::vector<Card*> m_cards;

	public:
		void Shuffle();
	};

	class Stack : public Zone
	{
		//	Needs to be a first in last out order, while being indexable
		//	Is not owned by any player
		//	All cards are public to all players
	private:


	public:

	};
}