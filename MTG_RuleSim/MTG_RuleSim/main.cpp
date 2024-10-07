#include "Game.h"
#include "Player.h"

using namespace MTG;

int main() {
	Game* game = new Game();

	Player* p1 = new Player();
	Player* p2 = new Player();
	Player* p3 = new Player();
	Player* p4 = new Player();

	game->AddPlayer(p1);
	game->AddPlayer(p2);
	game->AddPlayer(p3);
	game->AddPlayer(p4);

	game->Initialise();

	game->Run();
}