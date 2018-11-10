// unidays challenge.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "basket.h"
#include "tests.h"
#include <assert.h>

using namespace std;

int main()
{
	char itemName = 'A';
	double itemPrice = 0;
	basket userBasket = basket();

	char isContinuing = 'y';

	cout << "Unidays test" << endl;
	cout << "Running Automated tests" << endl;
	tests runTest = tests();
	assert(runTest.test1() == true);
	assert(runTest.test2() == true);
	assert(runTest.test3() == true);
	assert(runTest.test4() == true);
	assert(runTest.test5() == true);
	assert(runTest.test6() == true);
	assert(runTest.test7() == true);
	assert(runTest.test8() == true);
	assert(runTest.test9() == true);
	assert(runTest.test10() == true);
	assert(runTest.test11() == true);
	assert(runTest.test12() == true);
	assert(runTest.test13() == true);
	assert(runTest.test14() == true);
	assert(runTest.test15() == true);
	assert(runTest.test16() == true);
	assert(runTest.test17() == true);
	assert(runTest.test18() == true);
	assert(runTest.test19() == true);
	assert(runTest.test20() == true);

	cout << "All tests passed" << endl;

	while (isContinuing == 'y') {
		cout << "What is the name of the item?" << endl;
		cin >> itemName;
		cout << "What is the price of the item?" << endl;
		cin >> itemPrice;

		userBasket.addToBasket(itemName, itemPrice);

		cout << "Would you like to add another item? (y/n)" << endl;
		cin >> isContinuing;
	}

	cout << endl << "Would you like home delivery? (y/n)" << endl;
	char addDelivery = 'a';
	cin >> addDelivery;
	if (addDelivery == 'y')
	{
		cout << "Delivery added" << endl;
		cout << "The total price is " << userBasket.getTotalPrice(true) << endl;
	}
	else
	{
		cout << "no delivery" << endl;
		cout << "The total price is " << userBasket.getTotalPrice(false) << endl;
	}

	

	cout << "Press anything to exit" << endl;
	char exit = 'a';
	cin >> exit;




    return 0;
}



