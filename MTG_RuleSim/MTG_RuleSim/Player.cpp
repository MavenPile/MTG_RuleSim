#include "Player.h"
#include "Zones.h"
#include "Card.h"

namespace MTG
{
	Zone& Player::GetHand()
	{
		return *m_hand;
	}

	Zone& Player::GetGraveyard()
	{
		// TODO: insert return statement here
	}

	Zone& Player::GetLibrary()
	{
		// TODO: insert return statement here
	}

	Zone& Player::GetExile()
	{
		// TODO: insert return statement here
	}

	Zone& Player::GetBattlefield()
	{
		// TODO: insert return statement here
	}

	Zone& Player::GetStack()
	{
		// TODO: insert return statement here
	}
}