#include "stdafx.h"
#include "discount.h"


discount::discount()
{
	
}

discount::discount(char name, double price)
{
	//ctor

	itemName = name;
	itemPrice = price;
}

discount::~discount()
{
	//dtor
}

double discount::getDescountPrice(int amount)
{
	double priceWithDiscounts;
	double DiscountedPrice;
	double UnDiscountedPrice;

	switch (itemName)
	{
	case 'A':
		priceWithDiscounts = itemPrice * amount;
		break;

	case 'B':
		DiscountedPrice = (floor((amount / 2))) * 20;
		UnDiscountedPrice = (amount % 2) * itemPrice;
		priceWithDiscounts = DiscountedPrice + UnDiscountedPrice;
		break;

	case 'C':
		DiscountedPrice = (floor((amount / 3))) * 10;
		UnDiscountedPrice = (amount % 3) * itemPrice;
		priceWithDiscounts = DiscountedPrice + UnDiscountedPrice;
		break;

	case 'D':
		DiscountedPrice = (amount - (amount %2)) * (itemPrice / 2);
		UnDiscountedPrice = (amount % 2) * itemPrice;
		priceWithDiscounts = DiscountedPrice + UnDiscountedPrice;
		break;

	case 'E':
		DiscountedPrice = (floor((amount / 3))) * (itemPrice * 2);
		UnDiscountedPrice = (amount % 3) * itemPrice;
		priceWithDiscounts = DiscountedPrice + UnDiscountedPrice;
		break;

	default:
		priceWithDiscounts = itemPrice * amount;
		break;



	}

	return priceWithDiscounts;
}

