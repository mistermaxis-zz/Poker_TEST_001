#pragma once
#include <iostream>
#include "Deck.h"
#include <crtdbg.h>

class IDealer {
	public:
	virtual void Deal(Dealable& dealable) = 0;
	virtual ~IDealer() {};
};

class PokerDealer : public IDealer {
private:
	Deck deck;
public:
	PokerDealer() { }
	~PokerDealer() { }
	
	virtual void Deal(Dealable& dealable)
	{
		dealable.Deal(deck.GetCard());
	}
};