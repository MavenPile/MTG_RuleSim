#pragma once
#include "Card.h"

namespace MTG
{
	class Zone;

	class Divination : public Card
	{
	//	Draw two cards.
	private:


	public:
		virtual void Resolve(Zone* targetZone) override {


		}
	};

	class Harness_Infinity : public Card
	{
	//	Exchange your hand and graveyard.
	//	Exile Harness Infinity.
	
	private:
		Zone* m_currentZone;

	public:
		virtual void Cast() override {}
		virtual void Resolve(Zone* targetZone) override {
			//	Exchange the hand and graveyard vectors

			//	Resolution zone is exile now
			//	Or, the spell kind of sends itself to exile instead of having an exile resolution zone
			//	That's weird, but doesn't really change anything


		}
	};

	class Quick_Study : public Card
	{
		//	Draw two cards.

	private:
		Zone* m_currentZone;

	public:
		virtual void Resolve(Zone* targetZone) override {

		}
	};

	class Corpse_Knight : public Card
	{
		//	WB
		//	White and Black Creature Zombie Knight
		//	2/2
		//	Whenever another creature enters the battlefield under your control, each opponent loses 1 life.
	private:
		Zone* m_currentZone;
		int m_power = 2;
		int m_toughness = 2;

	public:
		virtual void Resolve();
		virtual void ElseEnters(Card* _card) override;
	};
}