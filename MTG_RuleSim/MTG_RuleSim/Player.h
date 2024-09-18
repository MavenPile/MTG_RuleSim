#pragma once
//#include "Zone.h"

class MTG_Zone::Zone;

namespace MTG_Player
{
	class Player
	{
	private:
		MTG_Zone::Zone* m_hand;	//	private to all opposing players, unless revealed

		MTG_Zone::Zone* m_library;	//	private to all players

		MTG_Zone::Zone* m_battlefield;	//	public to all players
		MTG_Zone::Zone* m_graveyard;	//	public to all players
		MTG_Zone::Zone* m_exile;	//	public to all players

		MTG_Zone::Zone& m_stack;	//	public zone, not owned by a single player

	public:
		MTG_Zone::Zone& GetHand();
		MTG_Zone::Zone& GetGraveyard();
		MTG_Zone::Zone& GetLibrary();
		MTG_Zone::Zone& GetExile();
		MTG_Zone::Zone& GetBattlefield();

		MTG_Zone::Zone& GetStack();
	};
}