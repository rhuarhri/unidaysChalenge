#pragma once

#include <math.h>

class discount
{


	public:
		discount();
        discount(char, double);
        virtual ~discount();
        double getDescountPrice(int);
    protected:
    private:
        char itemName;
        double itemPrice;
};

