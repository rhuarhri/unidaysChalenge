#include "stdafx.h"
#include "tests.h"
#include "basket.h"
#include <assert.h>


tests::tests()
{
	

}


tests::~tests()
{
}

bool tests::test1()
{
	//random input
	testBasket = basket();
	//items in basket
	testBasket.addToBasket('f', 0);
	//with delivery
	double totalPrice = testBasket.getTotalPrice(true);

	if (totalPrice == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool tests::test2()
{
	//input A
	testBasket = basket();
	//items in basket
	testBasket.addToBasket('A', 8);
	//with delivery
	double totalPrice = testBasket.getTotalPrice(true);


	if (totalPrice == 15)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool tests::test3()
{
	//input B
	testBasket = basket();
	//items in basket
	testBasket.addToBasket('B', 12);
	//with delivery
	double totalPrice = testBasket.getTotalPrice(true);


	if (totalPrice == 19)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool tests::test4()
{
	//input C
	testBasket = basket();
	//items in basket
	testBasket.addToBasket('C', 4);
	//with delivery
	double totalPrice = testBasket.getTotalPrice(true);

	if (totalPrice == 11)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool tests::test5()
{
	//input D
	testBasket = basket();
	//items in basket
	testBasket.addToBasket('D', 7);
	//with delivery
	double totalPrice = testBasket.getTotalPrice(true);

	if (totalPrice == 14)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool tests::test6()
{
	//input E
	testBasket = basket();
	//items in basket
	testBasket.addToBasket('E', 5);
	//with delivery
	double totalPrice = testBasket.getTotalPrice(true);

	if (totalPrice == 12)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool tests::test7()
{
	//input BB
	testBasket = basket();
	//items in basket
	testBasket.addToBasket('B', 12);
	testBasket.addToBasket('B', 12);
	//with delivery
	double totalPrice = testBasket.getTotalPrice(true);

	if (totalPrice == 27)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool tests::test8()
{
	//input BBB
	testBasket = basket();
	//items in basket
	testBasket.addToBasket('B', 12);
	testBasket.addToBasket('B', 12);
	testBasket.addToBasket('B', 12);
	//with delivery
	double totalPrice = testBasket.getTotalPrice(true);

	if (totalPrice == 39)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool tests::test9()
{
	//input BBBB
	testBasket = basket();
	//items in basket
	testBasket.addToBasket('B', 12);
	testBasket.addToBasket('B', 12);
	testBasket.addToBasket('B', 12);
	testBasket.addToBasket('B', 12);
	//with delivery
	double totalPrice = testBasket.getTotalPrice(true);

	if (totalPrice == 47)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool tests::test10()
{
	//input CCC
	testBasket = basket();
	//items in basket
	testBasket.addToBasket('C', 4);
	testBasket.addToBasket('C', 4);
	testBasket.addToBasket('C', 4);
	//with delivery
	double totalPrice = testBasket.getTotalPrice(true);

	if (totalPrice == 17)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool tests::test11()
{
	//input CCCC
	testBasket = basket();
	//items in basket
	testBasket.addToBasket('C', 4);
	testBasket.addToBasket('C', 4);
	testBasket.addToBasket('C', 4);
	testBasket.addToBasket('C', 4);
	//with delivery
	double totalPrice = testBasket.getTotalPrice(true);

	if (totalPrice == 21)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool tests::test12()
{
	//input DD
	testBasket = basket();
	//items in basket
	testBasket.addToBasket('D', 7);
	testBasket.addToBasket('D', 7);
	//with delivery
	double totalPrice = testBasket.getTotalPrice(true);

	if (totalPrice == 14)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool tests::test13()
{
	//input DDD
	testBasket = basket();
	//items in basket
	testBasket.addToBasket('D', 7);
	testBasket.addToBasket('D', 7);
	testBasket.addToBasket('D', 7);
	//with delivery
	double totalPrice = testBasket.getTotalPrice(true);

	if (totalPrice == 21)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool tests::test14()
{
	//input EE
	testBasket = basket();
	//items in basket
	testBasket.addToBasket('E', 5);
	testBasket.addToBasket('E', 5);
	//with delivery
	double totalPrice = testBasket.getTotalPrice(true);

	if (totalPrice == 17)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool tests::test15()
{
	//input EEE
	testBasket = basket();
	//items in basket
	testBasket.addToBasket('E', 5);
	testBasket.addToBasket('E', 5);
	testBasket.addToBasket('E', 5);
	//with delivery
	double totalPrice = testBasket.getTotalPrice(true);

	if (totalPrice == 17)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool tests::test16()
{
	//input EEEE
	testBasket = basket();
	//items in basket
	testBasket.addToBasket('E', 5);
	testBasket.addToBasket('E', 5);
	testBasket.addToBasket('E', 5);
	testBasket.addToBasket('E', 5);
	//with delivery
	double totalPrice = testBasket.getTotalPrice(true);

	if (totalPrice == 22)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool tests::test17()
{
	//input 
	testBasket = basket();
	//items in basket
	testBasket.addToBasket('D', 7);
	testBasket.addToBasket('D', 7);
	testBasket.addToBasket('D', 7);
	testBasket.addToBasket('D', 7);
	testBasket.addToBasket('D', 7);
	testBasket.addToBasket('D', 7);
	testBasket.addToBasket('D', 7);
	testBasket.addToBasket('D', 7);
	testBasket.addToBasket('D', 7);
	testBasket.addToBasket('D', 7);
	testBasket.addToBasket('D', 7);
	testBasket.addToBasket('D', 7);
	testBasket.addToBasket('D', 7);
	testBasket.addToBasket('D', 7);
	//with delivery
	double totalPrice = testBasket.getTotalPrice(true);

	if (totalPrice == 56)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool tests::test18()
{
	//input BBBBCCC
	testBasket = basket();
	//items in basket
	testBasket.addToBasket('B', 12);
	testBasket.addToBasket('B', 12);
	testBasket.addToBasket('B', 12);
	testBasket.addToBasket('B', 12);
	testBasket.addToBasket('C', 4);
	testBasket.addToBasket('C', 4);
	testBasket.addToBasket('C', 4);
	//with delivery
	double totalPrice = testBasket.getTotalPrice(true);

	if (totalPrice == 50)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool tests::test19()
{
	//input ABBCCCDDEE
	testBasket = basket();
	//items in basket
	testBasket.addToBasket('A', 8);
	testBasket.addToBasket('B', 12);
	testBasket.addToBasket('B', 12);
	testBasket.addToBasket('C', 4);
	testBasket.addToBasket('C', 4);
	testBasket.addToBasket('C', 4);
	testBasket.addToBasket('D', 7);
	testBasket.addToBasket('D', 7);
	testBasket.addToBasket('E', 5);
	testBasket.addToBasket('E', 5);
	//with delivery
	double totalPrice = testBasket.getTotalPrice(true);

	if (totalPrice == 55)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool tests::test20()
{
	//input EDCBAEDCBC
	testBasket = basket();
	//items in basket
	testBasket.addToBasket('E', 5);
	testBasket.addToBasket('D', 7);
	testBasket.addToBasket('C', 4);
	testBasket.addToBasket('B', 12);
	testBasket.addToBasket('A', 8);
	testBasket.addToBasket('E', 5);
	testBasket.addToBasket('D', 7);
	testBasket.addToBasket('C', 4);
	testBasket.addToBasket('B', 12);
	testBasket.addToBasket('C', 4);
	//with delivery
	double totalPrice = testBasket.getTotalPrice(true);

	if (totalPrice == 55)
	{
		return true;
	}
	else
	{
		return false;
	}

}

