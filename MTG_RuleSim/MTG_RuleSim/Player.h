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
		std::vector<Player*>* m_opponents;

		//	Private Zones - handled by player
		Zone* m_graveyard;	
		Zone* m_hand;	
		Zone* m_library;	
		
		//	Shared Zones - handled by zone manager
		Zone* battlefield;	
		Zone* command;	
		Zone* exile;	
		Zone* stack;	

	public:
		//	Player Methods
		~Player();

		void Initialise(int _life, std::vector<Card*>* _cards, Zone* _stack);

		//	Private Zone Methods
		Zone* GetGraveyard() { return m_graveyard; }
		Zone* GetHand() { return m_hand; }
		Zone* GetLibrary() { return m_library; }
		void SetGraveyard(Zone* _graveyard) { m_graveyard = _graveyard; }
		void SetHand(Zone* _hand) { m_hand = _hand; }
		void SetLibrary(Zone* _library) { m_library = _library; }

		//	Shared Zone Methods
		Zone* GetBattlefield() { return battlefield; }
		Zone* GetCommand() { return command; }
		Zone* GetExile() { return exile; }
		Zone* GetStack() { return stack; }		
		void SetBattlefield(Zone* _battlefield) { battlefield = _battlefield; }
		void SetCommand(Zone* _command) { command = _command; }
		void SetExile(Zone* _exile) { exile = _exile; }
		void SetStack(Zone* _stack) { stack = _stack; }

		//	Opponent Methods
		std::vector<Player*>* GetOpponents() { return m_opponents; }
		void AddOpponent(Player* _opponent) { m_opponents->push_back(_opponent); }
		void RemoveOpponent(Player* _opponent);

		//	Life Methods
		int GetLife() { return m_life; }
		void SetLife(int _life) { m_life = _life; }
		void AddLife(int _life) { m_life += _life; }
		void LoseLife(int _life) { m_life -= _life; }




	};
}