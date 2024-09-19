#pragma once
#include <vector>

namespace MTG
{
	class Zone;

	class ZoneManager
	{
		std::vector<Zone*> m_battlefields;
		std::vector<Zone*> m_hands;
		std::vector<Zone*> m_graveyards;
		std::vector<Zone*> m_exiles;
		std::vector<Zone*> m_libraries;

		Zone* m_stack;

	public:

	};
}