#pragma once
#include <vector>
#include <raylib-cpp.hpp>
#include "Types.h"
#include "Supertypes.h"

namespace MTGTyping
{
	class Card
	{
	private:
		std::vector<Type> m_cardTypes;
		std::vector<Supertype> m_cardSuperTypes;
		raylib::Texture2D* m_texture;

	public:
		std::vector<Type> GetCardType() { return m_cardTypes; }
		void AddCardType(Type _type) { m_cardTypes.push_back(_type); }
		void RemoveCardType(Type _type) {}
	};
}