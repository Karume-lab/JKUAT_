#include "main.hpp"

int getType(void)
{
	int type;
	do
	{
		cout << "Choose an account type: " << endl;
		cout << "1. Savings account" << endl;
		cout << "2. Current account" << endl;
		cin >> type;
	}while (type != 1 && type != 2);

	return (type);
}
