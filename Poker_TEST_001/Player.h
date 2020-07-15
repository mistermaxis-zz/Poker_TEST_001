#pragma once
#include "IDealable.h"
#include <crtdbg.h>

class IPlayer : public Dealable, public Payable {
	//std::vector<Card> Hand;
protected:
	std::string Name;
public:
	std::string GetName() { return Name; }
};

class PokerPlayer : public IPlayer {
public:
	PokerPlayer(std::string name) { Name = name; }
	~PokerPlayer() { }
};
