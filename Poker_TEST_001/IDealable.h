#pragma once
#include "Card.h"

class IDealable {
public:
	virtual void Deal(Card c) = 0;
};

class Dealable : public IDealable {
private:
	Card m_card;
public:
	virtual void Deal(Card c) { m_card.card = c.card; }
	Card showCard() { return m_card; }
};