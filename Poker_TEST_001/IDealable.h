#pragma once
#include "Card.h"
#include <crtdbg.h>

class IDealable {
public:
	virtual void Deal(Card c) = 0;
};

class Dealable : public IDealable {
private:
	std::vector<Card> Hand;
protected:
	Dealable() {}
public:
	virtual void Deal(const Card c) { Hand.emplace_back(c); }
	std::vector<Card> showCards() const { return Hand; }
};