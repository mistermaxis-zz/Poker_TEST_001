#pragma once
#include "IDealable.h"
#include "IPayable.h"
#include "Player.h"
#include <crtdbg.h>

class Table : public Dealable, public Payable {
	//std::vector<Card> Hand;
public:
	Table() {}
	~Table() {}
};
