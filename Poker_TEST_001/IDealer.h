#pragma once
#include "IDealable.h"
#include <cstdlib>
#include <ctime>

class IDealer {
	public:
	virtual void Deal(Dealable& d) = 0;
};

class Dealer : public IDealer {
public:
	virtual void Deal(Dealable& d)
	{
		srand((unsigned int)time(nullptr));
		Card card_;
		card_.card = rand() % 52;
		d.Deal(card_);
	}
};
