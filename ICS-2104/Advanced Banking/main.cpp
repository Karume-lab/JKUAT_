#include "main.hpp"

int main(void)
{
	Cur_acct acc_c;
	Sav_acct acc_s;
	int choice, type = 0, flag = 0;

	while (flag == 0)
	{
		choice = getOption();
		switch (choice)
		{
		case 1:
			type = getType();
			if (type == 1)
				acc_s.new_s();
			else if (type == 2)
				acc_c.new_c();
			else
			{
				cout << "Failed to add a new customer!" << endl;
				return (-1);
			}
			break;
		case 2:
			if (type == 1)
				getDetails_s();
			else if (type == 2)			
				getDetails_c();
			else
				cout << "Error!\n" << endl;
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			listCustomers();
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			cout <<"Thank you for banking with us!" << endl;
			flag = 1;
		}
	}
	


	

	return (0);
}
