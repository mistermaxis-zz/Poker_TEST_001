#include "pch.h"

int main()
{
	Table table1;
	Player player1;
	Dealer dealer1;
	std::cout << table1.showCard().card << "\n";
	std::cout << player1.showCard().card << "\n";
	dealer1.Deal(table1);
	dealer1.Deal(player1);
	std::cout << table1.showCard().card << "\n";
	std::cout << player1.showCard().card << "\n";

	return 0;
}
