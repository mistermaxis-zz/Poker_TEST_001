#include "pch.h"
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	Table table1;
	std::vector<PokerPlayer> players;
	PokerPlayer p1, p2;
	players.emplace_back(p1);
	players.emplace_back(p2);

	PokerDealer samJohnson;
	//Game texasHoldEm;

	samJohnson.Deal(table1);
	samJohnson.Deal(table1);
	samJohnson.Deal(table1);
	samJohnson.Deal(table1);
	samJohnson.Deal(table1);
	samJohnson.Deal(table1);
	samJohnson.Deal(table1);
	samJohnson.Deal(table1);
	samJohnson.Deal(players[0]);
	samJohnson.Deal(players[1]);

	auto cards = table1.showCards();

	for (auto card : cards)
	{
		std::cout << card.GetID() << "\n" << card.GetNumber().getValueName() << " of " << card.GetSuit().getSuitName() << "\n";
	}

	cards = players[0].showCards();

	for (auto cards : cards)
	{
		std::cout << cards.GetID() << "\n" << cards.GetNumber().getValueName() << " of " << cards.GetSuit().getSuitName() << "\n";
	}

	cards = players[1].showCards();

	for (auto cards : cards)
	{
		std::cout << cards.GetID() << "\n" << cards.GetNumber().getValueName() << " of " << cards.GetSuit().getSuitName() << "\n";
	}

	return 0;
}