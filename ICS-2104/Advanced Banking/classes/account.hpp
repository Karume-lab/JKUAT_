#ifndef _ACCOUNT_HPP_
#define _ACCOUNT_HPP_
#include "../main.hpp"

class Account
{
	protected:
		string name;
		string number;
		int type;
		double balance;
		bool chequeBook;

	public:
		Account();
		Account(string name, string number, string type, double balance, bool chequeBook);
		void deposit();
		double getBalance_a();
		void setName_a(string name);
		void setNumber_a(string number);
		void setType_a(char type);
		void setChequeBook_a(bool chequeBook);
		void setDeposit(void);
		void setBalance_a(double balance);
};

#endif
