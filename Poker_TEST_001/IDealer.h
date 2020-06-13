#pragma once
#include <iostream>
#include "Deck.h"

class IDealer {
	public:
	virtual void Deal(Dealable& d) = 0;
	virtual ~IDealer() {};
};

class PokerDealer : public IDealer {
private:
	Deck deck;
public:
	PokerDealer() { std::cout << "Dealer Constructor Called\n"; }
	
	virtual void Deal(Dealable& d)
	{
		Card card = deck.GetCard();

		d.Deal(card);
	}
};