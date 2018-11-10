#pragma once

#include <iostream>

#include "item.h"

#include "discount.h"

using namespace std;


class itemList
{

public:
	itemList();
	itemList(char, double);
	virtual ~itemList();
	void addTolist();
	double getTotalPrice();
	char getName();
protected:
private:
	int amount;
	double totalPrice;
	item itemDescription;
	discount DiscountOnItem;

};

