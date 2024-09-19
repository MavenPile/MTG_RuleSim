#pragma once
#include <vector>

namespace MTG
{
	class Zone;
	class Card;
	
	class Player
	{
	private:
		int m_life;
		int m_poison;	//	need to replace with a counters system

		bool m_cityBlessing;	//	these could probably be changed into separate objects
		bool m_monarch;
		bool m_initiative;
		
		//	Opponents - need to be stored somehow (this might not be the way)
		std::vector<Player*> m_opponents;

		//	Private Zones - need to be deleted
		Zone* m_graveyard;	
		Zone* m_hand;	
		Zone* m_library;	
		
		//	Shared Zones - just needs to be referenced (maybe doesn't...)
		Zone& m_battlefield;	
		Zone& m_command;	
		Zone& m_exile;	
		Zone& m_stack;	

	public:
		Player(Zone* _hand, Zone* _library, Zone* _battlefield, Zone* _graveyard, Zone* _exile, Zone* _stack) : m_hand(_hand), m_library(_library), m_battlefield(*_battlefield), m_graveyard(_graveyard), m_exile(*_exile) {}
		~Player();
		
		void Initialise(int _life, std::vector<Card*>* _cards, Zone* _stack);

		int GetHealth();
		int SetHealth(int newHealth);

		std::vector<Player*> GetOpponents();

		Zone& GetGraveyard();
		Zone& GetHand();
		Zone& GetLibrary();

		Zone& GetBattlefield();
		Zone& GetCommand();
		Zone& GetExile();
		Zone& GetStack();
	};
}