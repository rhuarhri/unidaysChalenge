#include "stdafx.h"
#include "item.h"


item::item()
{
}

item::item(char name, double price)
{
	//ctor

	itemName = name;
	itemPrice = price;
}

item::~item()
{
	//dtor
}

