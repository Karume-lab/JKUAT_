#include "main.hpp"

void newCustomer(void)
{
	int type;
	do
	{
		cout << "Choose an account type: " << endl;
		cout << "1. Savings account" << endl;
		cout << "2. Current account" << endl;
		cin >> type;
	}while (type != 1 && type != 2);
	
	if (type == 1)
		Sav_acct sav_a = Sav_acct();
	else if (type == 2)
		Cur_acct cur_a = Cur_acct();
	else
	{
		cout << "Failed to create a new customer account!" << endl;
		return;
	}
}
