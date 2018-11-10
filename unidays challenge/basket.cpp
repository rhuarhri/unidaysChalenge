#include "stdafx.h"
#include "basket.h"
#include <vector>
#include "itemList.h"

using namespace std;

basket::basket()
{
}


basket::~basket()
{
}


void basket::addToBasket(char itemName, double price)
{
	itemList newItem;

	if (inBasket.empty() == true)
	{
		newItem = itemList(itemName, price);
		inBasket.push_back(newItem);

	}
	else
	{
		bool itemFoundInList = false;

		for (int i = 0; i < inBasket.size(); i++)
		{


			if (inBasket[i].getName() == itemName)
			{
				inBasket[i].addTolist();
				itemFoundInList = true;
				break;

			}
			else {
				itemFoundInList = false;
			}

		}

		if (itemFoundInList == false)
		{
			inBasket.push_back( itemList(itemName, price));

		}

	}



}

double basket::getTotalPrice(bool withDelivery)
{
	double totalPrice = 0;

	for (int i = 0; i < inBasket.size(); i++)
	{
		totalPrice += inBasket[i].getTotalPrice();

	}

	if (withDelivery == true)
	{
		delivery includeDelivery = delivery();
		totalPrice += includeDelivery.getDeliveryCost(totalPrice);
	}
	else
	{

	}



	return totalPrice;

}
