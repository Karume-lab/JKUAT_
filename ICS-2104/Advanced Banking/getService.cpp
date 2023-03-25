#include "main.hpp"

int getService(void)
{
	int choice;

	choice = getOption();
	
	switch (choice)
	{
	case 1:
		newCustomer();
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	case 7:
		break;
	case 8:
		break;
	default:
		cout <<"System error, kindly reboot the system!" << endl;
		return (-1);
		break;
	}

	return (0);
}
