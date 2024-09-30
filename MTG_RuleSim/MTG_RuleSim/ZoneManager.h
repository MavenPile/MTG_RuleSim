#pragma once
#include <vector>

namespace MTG
{
	class Zone;
	class Player;
	class Stack;
	class Battlefield;
	class Exile;
	class Command;

	class ZoneManager
	{
	private:
		std::vector<Zone*> m_hands;
		std::vector<Zone*> m_graveyards;
		std::vector<Zone*> m_libraries;

		Stack* m_stack;
		Battlefield* m_battlefield;
		Exile* m_exile;
		Command* m_command;

	public:
		ZoneManager();
		~ZoneManager() { delete m_stack, delete m_battlefield, delete m_exile, delete m_command; }

		void Initialise(Player* _p1, Player* _p2, Player* _p3, Player* _p4);
	};
}