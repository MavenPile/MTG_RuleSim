#pragma once
#include "Card.h"
#include "Zones.h"

namespace MTG_Sorceries
{
	//	Draw two cards.

	class Divination : public MTG_Card::Card
	{
	private:


	public:
		virtual void Resolve(MTG_Zone::Zone* targetZone) override {


		}
	};
}

namespace MTG_Instants
{
	class Harness_Infinity : public MTG_Card::Card
	{
	//	Exchange your hand and graveyard.
	//	Exile Harness Infinity.
	
	private:
		MTG_Zone::Zone* m_currentZone;

	public:
		virtual void Cast() override { m_currentZone->MoveCard(this, targetZone); }
		virtual void Resolve(MTG_Zone::Zone* targetZone) override {
			//	Exchange the hand and graveyard vectors

			//	Resolution zone is exile now
			//	Or, the spell kind of sends itself to exile instead of having an exile resolution zone
			//	That's weird, but the logic I'm thinking of probably wont discriminate


		}
	};

	class Quick_Study : public MTG_Card::Card
	{
		//	Draw two cards.

	private:
		MTG_Zone::Zone* m_currentZone;

	public:
		virtual void Resolve(MTG_Zone::Zone* targetZone) override {

		}
	};
}