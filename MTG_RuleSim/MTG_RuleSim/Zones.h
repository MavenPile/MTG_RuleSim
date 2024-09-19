#pragma once
#include <vector>
#include "Zone.h"

namespace MTG
{	
	class Battlefield : public Shared_Zone
	{
		//	All cards are public to all players
		//	Some cards may be face-down, known only to the owning(?) player
	private:
		std::vector<Card*> m_cards;


	public:
		virtual void CardEnters(Card* _card, MTG::Zone* _zone) override;
		virtual void CardLeaves(Card* _card, MTG::Zone* _zone) override;
	};

	class Command : public Shared_Zone
	{
		//	Houses a commander, but technically can have non-commander cards
		//	Only a commander can be cast from the command zone

	private:


	public:

	};

	class Exile : public Shared_Zone
	{
		//	All cards are public to all players
		//	Some cards may be face down, only known to the owning(?) player
	private:


	public:

	};

	class Stack : public Shared_Zone
	{
		//	Needs to be a first in last out order, while being indexable
		//	Is not owned by any player
		//	All cards are public to all players
	private:


	public:

	};

	class Graveyard : public Private_Zone
	{	
		//	All cards are public to all players
	private:


	public:

	};

	class Hand : public Private_Zone
	{
		//	Private Zone
		
		//	All cards are private to other players
		//	Some cards may be revealed to some/all other players
	private:

	public:

	};

	class Library : public Private_Zone
	{
		//	All cards are private to all players
		//	Some cards may be revealed to some/all players
	private:
		std::vector<Card*> m_cards;

	public:
		void Shuffle();
	};
}