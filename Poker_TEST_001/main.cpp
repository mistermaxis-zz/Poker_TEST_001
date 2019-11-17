#include "pch.h"

int main()
{
	Table table1;
	std::vector<PokerPlayer> players;
	players.emplace_back(); players.emplace_back();
	std::unique_ptr<IDealer> dealer1(new Dealer);
	std::cout << table1.showCard().card << "\n";
	std::cout << players[0].showCard().card << "\n";
	std::cout << players[1].showCard().card << "\n";
	dealer1->Deal(table1);
	dealer1->Deal(players[0]);
	dealer1->Deal(players[1]);
	std::cout << table1.showCard().card << "\n";
	std::cout << players[0].showCard().card << "\n";
	std::cout << players[1].showCard().card << "\n";
	return 0;
}