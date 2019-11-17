#pragma once
#include "IDealable.h"
#include "Player.h"

class Table : public Dealable {
private:
	std::vector<Player> Players;
public:
	void AddPlayers(int num_players) { for (int i = 0; i < num_players; i++) Players.emplace_back(); }
};
