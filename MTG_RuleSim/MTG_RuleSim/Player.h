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
		int m_poison;

		bool m_cityBlessing;
		bool m_monarch;
		bool m_initiative;
		
		Zone* m_hand;	//	private to all opposing players, unless revealed

		Zone* m_library;	//	private to all players

		Zone* m_battlefield;	//	public to all players
		Zone* m_graveyard;	//	public to all players
		Zone* m_exile;	//	public to all players

		Zone& m_stack;	//	public zone, not owned by a single player

	public:
		Player();
		~Player();
		
		void Initialise(int _life, std::vector<Card*>* _cards);

		Zone& GetHand();
		Zone& GetGraveyard();
		Zone& GetLibrary();
		Zone& GetExile();
		Zone& GetBattlefield();

		Zone& GetStack();
	};
}