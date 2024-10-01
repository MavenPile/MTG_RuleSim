#include "Zone.h"

MTG::Zone::~Zone()
{
	for (Card* c : *m_cards) {
		delete c;
	}
}
