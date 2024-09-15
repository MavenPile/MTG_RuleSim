#pragma once

namespace MTGTyping
{
	class Type
	{

	};
	
	class Artifact : public Type
	{

	};

	class Enchantment : public Type
	{

	};

	class Creature : public Type
	{
		//	Has power and toughness
		//	Can attack and block while untapped
		//	If you didn't control the Creature since the beginning of your turn, it has summoning sickness (cannot attack)
	private:
		int m_power;
		int m_toughness;
		bool m_summoningSickness;

	public:


	};
	
	class Instant : public Type
	{

	};

	class Sorcery : public Type
	{

	};

	class Land : public Type
	{

	};

	class Planeswalker : public Type
	{

	};

	class Kindred : public Type
	{

	};

	class Battle : public Type
	{

	};

	class Emblem : public Type
	{

	};

	class Dungeon : public Type
	{

	};
}