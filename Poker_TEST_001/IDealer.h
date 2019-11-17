#pragma once
#include "IDealable.h"
#include <cstdlib>
#include <ctime>

constexpr size_t CARD_SIZE = 52;

class IDealer {
	public:
	virtual void Deal(Dealable& d) = 0;
};

class Dealer : public IDealer {
private:
	std::vector<uint8_t> Deck;
public:
	Dealer() { Deck.assign(CARD_SIZE, 0); }
	
	virtual void Deal(Dealable& d)
	{
		srand((unsigned int)time(nullptr));
		Card card_;
		
		do
		{
			card_.card = rand() % CARD_SIZE;
		} while (Deck[card_.card] == 1);
		Deck[card_.card] = 1;
		d.Deal(card_);
	}
};
