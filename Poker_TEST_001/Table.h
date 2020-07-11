#pragma once
#include "IDealable.h"
#include "IPayable.h"
#include "Player.h"

class Table : public Dealable, public Payable {
	//std::vector<Card> Hand;
	std::vector<PokerPlayer> Players;
public:
	
};
