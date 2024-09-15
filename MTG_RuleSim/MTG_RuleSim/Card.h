#pragma once
#include <vector>
#include <raylib-cpp.hpp>
#include <Type.h>
#include <SuperType.h>

class Card
{
public:
	std::vector<Type>* m_cardTypes;
	std::vector<SuperType>* m_cardSuperTypes;
	raylib::Texture2D* m_texture;

	std::vector<Type>* GetCardType() { return m_cardTypes; }
	void AddCardType(Type _type) { m_cardTypes->push_back(_type); }
	void RemoveCardType(Type _type) {
		
	}
};