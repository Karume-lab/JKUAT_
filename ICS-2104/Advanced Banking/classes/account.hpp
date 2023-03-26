#ifndef _ACCOUNT_HPP_
#define _ACCOUNT_HPP_
#include "../main.hpp"

class Account
{
	protected:
		char name[256];
		int number;
		int type;
		double balance;
		bool chequeBook;

	public:
		Account();
		Account(string name, string number, string type, double balance, bool chequeBook);
		void listCustomers(void);
};

#endif
