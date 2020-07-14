#pragma once
#include "Table.h"
#include "IDealer.h"
#include "IDealable.h"
#include "IDealer.h"
#include <vector>
#include <memory>

class Game {
private:
	std::unique_ptr<IDealer> pokerDealer;
	std::vector<IPlayer> pokerPlayers;
	void AddPlayers(int num_players) { for (int i = 0; i < num_players; i++) pokerPlayers.emplace_back(); }
	void DealPocketCards();
	void DealFlop();
	void DealTurn();
	void DealRiver();
	void CompareCards();
public:
	Game() { pokerDealer = std::unique_ptr<PokerDealer>(new PokerDealer); std::cout << "Game Constructor called\n"; }
	~Game() { std::cout << "Game Destructor called\n"; }

	void Start();

};
