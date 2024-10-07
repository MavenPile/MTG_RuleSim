#pragma once
#include <vector>
//#include "Player.h"
//#include "ZoneManager.h"

namespace MTG
{
	class Player;
	class ZoneManager;
	
	class Game
	{
	private:
		bool m_gaming;
		std::vector<Player*> m_players;
		ZoneManager* m_zoneManager;

	public:
		Game();
		~Game();

		void AddPlayer(Player* _player) { m_players.push_back(_player); }

		void Initialise();

		void Run();
	};
}