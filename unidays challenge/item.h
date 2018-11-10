#pragma once

#include <iostream>

using namespace std;


class item
{


public:
	item();
	item(char, double);
	virtual ~item();
	char itemName;
	double itemPrice;
protected:
private:
};

