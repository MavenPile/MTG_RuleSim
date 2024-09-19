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

	Zone& Player::GetGraveyard() 
	{
		return *m_graveyard;
	}
		
	Zone& Player::GetHand() 
	{
		return *m_hand;
	}

	Zone& Player::GetLibrary() 
	{
		return *m_library;
	}

	Zone& Player::GetBattlefield() 
	{
		return m_battlefield;
	}

	Zone& Player::GetCommand() 
	{
		return m_command;
	}

	Zone& Player::GetExile() 
	{
		return m_exile;
	}

	Zone& Player::GetStack() 
	{
		return m_stack;
	}
}