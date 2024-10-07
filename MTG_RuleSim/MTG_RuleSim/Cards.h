#pragma once
#include "Card.h"

namespace MTG
{
	class Zone;

	class Plains : public Permanent {
	public:
		virtual bool Play() override;

		virtual bool Tap() override;
	};

	class Island : public Permanent {

	};

	class Swamp : public Permanent {

	};

	class Mountain : public Permanent {

	};

	class Forest : public Permanent {

	};

	class Divination : public NonPermanent
	{
	//	2U
	//	Blue Sorcery
	//	Draw two cards.
	private:


	public:
		virtual void Resolve(Zone* targetZone) override {


		}
	};

	class Harness_Infinity : public NonPermanent
	{
	//	1BBBGGG
	//	Black Green Instant
	//	Mythic
	//	Exchange your hand and graveyard.
	//	Exile Harness Infinity.
	
	private:
		Zone* m_currentZone;

	public:
		virtual void Resolve(Zone* targetZone);
	};

	class Quick_Study : public NonPermanent
	{
		//	2U
		//	Blue Instant
		//	Draw two cards.

	private:
		Zone* m_currentZone;

	public:
		virtual void Resolve(Zone* targetZone) override {

		}
	};

	class Corpse_Knight : public Permanent
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
		//virtual void Resolve(Zone* targetZone);
		virtual void ElseEnters(Card* _card) override;
	};
}