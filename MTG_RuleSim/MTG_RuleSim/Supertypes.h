#pragma once

namespace MTGTyping
{
	class Supertype
	{

	};

	class Equipment : public Supertype
	{

	};
	
	class Aura : public Supertype
	{
		//	When not enchanting a permanent, must be placed in graveyard (not sacrifice)
		//	Cannot enter the battlefield without a target
	};

	class Basic : public Supertype
	{
		//	Player can have any number of Basic cards in a deck
		//	Only lands
	};

	class Legendary : public Supertype
	{
		//	Only one Legendary permanent of the same name may exist on a battlefield
		//	Opponent Legendary permanents don't contribute to this
		//	Player must choose one permanent to place in graveyard (not sacrifice)
	};

	class Snow : public Supertype
	{

	};

	class Token : public Supertype
	{
		//	Can only be created
		//	Can only exit on the battlefield
	};
}