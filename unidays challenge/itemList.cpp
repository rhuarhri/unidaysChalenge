#include "stdafx.h"
#include "itemList.h"


itemList::itemList()
{

}


itemList::itemList(char name, double price)
{
	amount = 1;
	itemDescription = item(name, price);
	DiscountOnItem = discount(name, price);


}


itemList::~itemList()
{
}

char itemList::getName()
{
	return itemDescription.itemName;
}

void itemList::addTolist()
{

	amount++;

}

double itemList::getTotalPrice()
{
	return DiscountOnItem.getDescountPrice(amount);

}

