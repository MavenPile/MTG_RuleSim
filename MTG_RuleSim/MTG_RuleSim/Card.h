#pragma once
#include <vector>
#include <raylib-cpp.hpp>
#include "Types.h"
#include "Supertypes.h"
#include "Zone.h"
#include "Player.h"

namespace MTG_Card
{
	class Card
	{
	private:
		//std::vector<Type> m_cardTypes;
		//std::vector<Supertype> m_cardSuperTypes;
		//raylib::Texture2D* m_texture;

		MTG_Zone::Zone* m_currentZone;
		const MTG_Player::Player* m_owner;
		MTG_Player::Player* m_controller;

	public:
		//std::vector<Type> GetCardType() { return m_cardTypes; }
		//void AddCardType(Type _type) { m_cardTypes.push_back(_type); }
		//void RemoveCardType(Type _type) {}

		//	Cards always need to have a possible resolution and zone to end up in
		virtual void Resolve(MTG_Zone::Zone* targetZone) = 0;


		virtual void OnCast();
		virtual void Cast();
		virtual void Enters();
		virtual void Leaves();
		virtual void Dies();

		virtual void EntersTrigger(MTG_Card::Card* enteringCard);
		virtual void LeavesTrigger(MTG_Card::Card* leavingCard);

		virtual void ChangeZone(MTG_Zone::Zone* targetZone) { m_currentZone = targetZone; }

		virtual void ChangeControl(MTG_Player::Player* newController) { m_controller = newController; }
	};
}