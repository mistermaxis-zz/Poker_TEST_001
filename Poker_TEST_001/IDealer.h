#pragma once
#include <iostream>
#include "Deck.h"
#include <crtdbg.h>

class IDealer {
	public:
	virtual void Deal(Dealable& d) = 0;
	virtual ~IDealer() {};
};

class PokerDealer : public IDealer {
private:
	Deck deck;
public:
	PokerDealer() { std::cout << "PokerDealer Constructor Called\n"; }
	~PokerDealer() { std::cout << "PokerDealer Destructor Called\n"; }
	
	virtual void Deal(Dealable& dealable)
	{
		dealable.Deal(deck.GetCard());
	}
};