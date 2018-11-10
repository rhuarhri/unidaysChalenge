#include "stdafx.h"
#include "delivery.h"


delivery::delivery()
{
}


delivery::~delivery()
{
}

double delivery::getDeliveryCost(double totalPrice)
{
	if (totalPrice >= 50 || totalPrice <= 0)
	{
		return 0;
	}
	else
	{
		return 7;
	}
}
