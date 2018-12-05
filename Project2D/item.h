#pragma once
#include <string>
#include "Attack.h"
//Used to in the shop to store items to be bought by the player.
struct Item
{
	const char* name;
	int mCost;
	Item();
	Item(const char* nameofitem, int costofitem);
};