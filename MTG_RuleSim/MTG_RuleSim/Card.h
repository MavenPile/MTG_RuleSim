#pragma once
#include <vector>

namespace MTG
{
	class Zone;

	class Player;

	class Type;
	class Supertype;
	class Subtype;
	class Colour;
	class Rarity;
	class StateManager;
	
	class Card
	{
	protected:

		Zone* m_currentZone;
		Player* m_owner;
		Player* m_controller;

		bool t_isCreature;


		//	Card typing
		std::vector<Type*> m_types;
		std::vector<Supertype*> m_supertypes;
		std::vector<Subtype*> m_subtypes;
		std::vector<Colour*> m_colour;
		Rarity* m_rarity;

		StateManager* stateManager;

	public:
		virtual void Play() = 0;	//	Playing a card, mostly only applicable to lands

		virtual void Cast();	//	The casting of the spell
		//	Not pure virtual, because lands are not cast

		std::vector<Type*>* GetCardTypes() { return &m_types; }
		bool CheckForCardType(Type* _type) { /*TODO: Search for a card and return a boolean*/ return true; }
		void RemoveCardType(Type* _type) { /*TODO: Search for a card and remove it*/ }
		void AddCardType(Type* _type) { m_types.push_back(_type); }

		Player* GetController() { return m_controller; }

		virtual void Resolve(Zone* targetZone);	//	The resolution of the spell
		//	Resolve for nonInstant, nonSorcery cards puts cards in their target zone (battlefield, graveyard, etc)
		//	Resolve for Instant and Sorcery cards also handles effects
		//	Lands do not resolve

		virtual void ThisEnters() {}
		virtual void ElseEnters(Card* _card) {}

		virtual void ThisLeaves() {}
		virtual void ElseLeaves(Card* _card) {}

		virtual void ThisCast() {}
		virtual void ElseCast(Card* _card) {}
		 

		virtual void ChangeZone(Zone* _targetZone) { m_currentZone = _targetZone; }

		virtual void ChangeController(Player* _newController) { m_controller = _newController; }
	};

	class Permanent : public Card
	{
	protected:
		Zone* m_currentZone;
		bool m_isTapped;


	public:

		virtual void Tap() { m_isTapped = true; }
		virtual void Untap() { m_isTapped = false; }
		virtual bool IsTapped() { return m_isTapped; }

	};

	class NonPermanent : public Card
	{
	protected:
		Zone* m_currentZone;

	public:

	};
}