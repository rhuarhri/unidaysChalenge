#pragma once

#include <iostream>
#include <vector>


#include "itemList.h"
#include "delivery.h"

using namespace std;


class basket
{


public:
	basket();
	virtual ~basket();
	void addToBasket(char, double);
	double getTotalPrice(bool);
protected:
private:
	vector<itemList> inBasket;

};

