#pragma once
#include "IDealable.h"

class IPlayer : public Dealable {
protected:
	int Chips{ 0 };

};

class PokerPlayer : public IPlayer {
public:
	PokerPlayer() { }
};
