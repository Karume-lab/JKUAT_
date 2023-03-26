#include "main.hpp"

int getOption(void)
{
	int opt = 0;
	cout << "WELCOME TO OUR BANKING SERVICES!!!\n\n";
	cout << "Kindly choose an option from the ones below:" << endl;
	do
	{
		cout << "1. New Customer" << endl;
		cout << "2. Deposit" << endl;
		cout << "3. Withdraw" << endl;
		cout << "4. Check Balance" << endl;
		cout << "5. List Customers" << endl;
		cout << "6. Delete Customer" << endl;
		cout << "7. Update Customer Details" << endl;
		cout << "8. Exit System" << endl;
		cin >> opt;
	} while (opt <= 0 || opt > 8);
	
	return (opt);
}