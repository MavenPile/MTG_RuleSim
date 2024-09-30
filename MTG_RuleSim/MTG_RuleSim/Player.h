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

		bool m_cityBlessing;	//	these could probably be changed into separate objects - or could be tracked by something else
		bool m_monarch;
		bool m_initiative;
		
		//	Opponents - need to be stored somehow (this might not be the way)
		std::vector<Player*> m_opponents;

		//	Private Zones - handled by player
		Zone* m_graveyard;	
		Zone* m_hand;	
		Zone* m_library;	
		
		//	Shared Zones - handled by zone manager
		Zone* m_battlefield;	
		Zone* m_command;	
		Zone* m_exile;	
		Zone* m_stack;	

	public:
		~Player();

		void SetGraveyard(Zone* _graveyard) { m_graveyard = _graveyard; }
		void SetHand(Zone* _hand) { m_hand = _hand; }
		void SetLibrary(Zone* _library) { m_library = _library; }
		void SetBattlefield(Zone* _battlefield) { m_battlefield = _battlefield; }
		void SetCommand(Zone* _command) { m_command = _command; }
		void SetExile(Zone* _exile) { m_exile = _exile; }
		void SetStack(Zone* _stack) { m_stack = _stack; }
		
		void Initialise(int _life, std::vector<Card*>* _cards, Zone* _stack);

		int GetHealth();
		void SetHealth(int newHealth);

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