#pragma once
#include "Table.h"
#include "IDealer.h"
#include "IDealable.h"
#include "IDealer.h"
#include <vector>
#include <memory>

class Game {
private:
	std::unique_ptr<IDealer> PokerDealer;
	std::vector<IPlayer> PokerPlayers;
	void AddPlayers(int num_players) { for (int i = 0; i < num_players; i++) PokerPlayers.emplace_back(); }
	void DealPocketCards();
	void DealFlop();
	void DealTurn();
	void DealRiver();
	void CompareCards();
public:
	Game() { PokerDealer = std::unique_ptr<Dealer>(new Dealer); }
	void Start();

};
