#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

class Card {
public:
	unsigned int card;
	Card() { card = 0; }
};

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

class Table : public Dealable {

};

class Player : public Dealable {

};

class Dealer {
public:
	void Deal(Dealable& d)
	{
		srand(time(nullptr));
		Card card_;
		card_.card = rand() % 52;
		d.Deal(card_);
	}
};