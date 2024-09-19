#pragma once
#include <vector>
//#include <raylib-cpp.hpp>
//#include "Types.h"
//#include "Supertypes.h"
//#include "Zone.h"
//#include "Player.h"

namespace MTG
{
	class Zone;
	class Player;
	
	class Card
	{
	private:
		//std::vector<Type> m_cardTypes;
		//std::vector<Supertype> m_cardSuperTypes;
		//raylib::Texture2D* m_texture;

		const Zone* m_currentZone;
		const Player* m_owner;
		Player* m_controller;

	public:
		//std::vector<Type> GetCardType() { return m_cardTypes; }
		//void AddCardType(Type _type) { m_cardTypes.push_back(_type); }
		//void RemoveCardType(Type _type) {}

		virtual void Cast() {}	//	The casting of the spell
		//	Not pure virtual, because lands are not cast

		virtual void Play() {}	//	Playing a card, mostly only applicable to lands

		virtual void Resolve(Zone* targetZone) {}	//	The resolution of the spell
		//	Resolve for nonInstant, nonSorcery cards puts cards in their target zone (battlefield, graveyard, etc)
		//	Resolve for Instant and Sorcery cards also handles effects
		//	Lands do not resolve

		virtual void ThisEnters() {}
		virtual void ElseEnters(Card* _card) {}

		virtual void ThisLeaves() {}
		virtual void ElseLeaves(Card* _card) {}

		virtual void ThisCast() {}
		virtual void ElseCast(Card* _card) {}


		virtual void ChangeZone(Zone* targetZone) { m_currentZone = targetZone; }

		virtual void ChangeControl(Player* newController) { m_controller = newController; }
	};
}