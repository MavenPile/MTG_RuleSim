#include "Player.h"
#include "Zones.h"
#include "Card.h"

namespace MTG
{
	Player::~Player()
	{
		//	Need to delete owned zones
		delete m_hand;
		delete m_library;
		delete m_graveyard;
	}

	void Player::Initialise(int _life, std::vector<Card*>* _cards, Zone* _stack)
	{

	}

	void Player::RemoveOpponent(Player* _opponent)
	{
		//	TODO: Search m_opponents and remove _opponent
	}


}