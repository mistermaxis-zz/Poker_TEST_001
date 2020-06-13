#pragma once

class SuitType {
private:
	std::pair<unsigned, std::string> CardSuit;
public:
	SuitType() { }
	SuitType(unsigned value, std::string name) { CardSuit = std::make_pair(value, name); }
	unsigned getSuitNumber() { return CardSuit.first; }
	std::string getSuitName() { return CardSuit.second; }
};

class NumberType {
private:
	std::pair<unsigned, std::string> CardNumber;
public:
	NumberType() { }
	NumberType(unsigned value, std::string name) { CardNumber = std::make_pair(value, name); }
	unsigned getValueNumber() { return CardNumber.first; }
	std::string getValueName() { return CardNumber.second; }
	unsigned operator+(SuitType& s) { return CardNumber.first + s.getSuitNumber(); }
};

class Card {
private:
	unsigned int cardID = 0;
	NumberType Number;
	SuitType Suit;
public:
	Card() {}
	Card(NumberType value, SuitType suit) : Number(value), Suit(suit), cardID(value + suit) { }
	NumberType GetNumber() { return Number; }
	SuitType GetSuit() { return Suit; }
	unsigned GetID() { return cardID; }
};