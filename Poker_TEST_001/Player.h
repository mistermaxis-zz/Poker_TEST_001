#pragma once
#include "IDealable.h"

class IPlayer : public Dealable, public Payable {
	//std::vector<Card> Hand;
	std::string Name;
};

class PokerPlayer : public IPlayer {
public:
	PokerPlayer() { }
};
