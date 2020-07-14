#pragma once
#include "IDealable.h"
#include <crtdbg.h>

class IPlayer : public Dealable, public Payable {
	//std::vector<Card> Hand;
	std::string Name;
};

class PokerPlayer : public IPlayer {
public:
	PokerPlayer() { std::cout << "PokerPlayer Constructor called\n"; }
	~PokerPlayer() { std::cout << "PokerPlayer Destructor called\n"; }
};
