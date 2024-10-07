#include "Game.h"
#include "Player.h"
#include "ZoneManager.h"

namespace MTG
{
	Game::Game() {
		m_gaming = true;
	}

	Game::~Game() {
		for (Player* p : m_players) {
			delete p;
		}

		delete m_zoneManager;
	}

	void Game::Initialise()
	{

	}

	void Game::Run() {




		while (m_gaming) {

		}
	}
}