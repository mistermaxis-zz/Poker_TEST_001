#pragma once
#include<set>
#include "Card.h"

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
	virtual void Deal(Card c) { Hand.push_back(c); }
	std::vector<Card> showCards() { return Hand; }
};