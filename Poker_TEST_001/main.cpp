#include "pch.h"
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	
	Game pokerGame;

	pokerGame.AddPlayer("John");
	pokerGame.AddPlayer("George");
	pokerGame.AddPlayer("Julio");
	
	pokerGame.DealPocketCards();

	//TODO Take Bets
	
	pokerGame.DealFlop();

	//TODO Take Bets

	pokerGame.DealTurn();
	
	//TODO Take Bets

	pokerGame.DealRiver();

	//TODO Take Bets

	pokerGame.ShowPlayersHands();

	return 0;
}