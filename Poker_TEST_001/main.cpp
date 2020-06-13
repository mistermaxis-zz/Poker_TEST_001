#include "pch.h"

int main()
{
	Table table1;
	std::vector<PokerPlayer> players;
	players.emplace_back(); players.emplace_back();
	std::unique_ptr<IDealer> dealer1(new PokerDealer);

	dealer1->Deal(table1);
	dealer1->Deal(players[0]);
	dealer1->Deal(players[1]);

	auto cards = table1.showCards();

	for (auto i : cards)
	{
		std::cout << i.GetID() << "\n" << i.GetNumber().getValueName() << " of " << i.GetSuit().getSuitName() << "\n";
	}

	cards = players[0].showCards();

	for (auto i : cards)
	{
		std::cout << i.GetID() << "\n" << i.GetNumber().getValueName() << " of " << i.GetSuit().getSuitName() << "\n";
	}

	cards = players[1].showCards();

	for (auto i : cards)
	{
		std::cout << i.GetID() << "\n" << i.GetNumber().getValueName() << " of " << i.GetSuit().getSuitName() << "\n";
	}

	return 0;
}