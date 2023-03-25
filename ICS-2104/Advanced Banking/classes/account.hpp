#ifndef _ACCOUNT_HPP_
#define _ACCOUNT_HPP_
#include <string>
using namespace std;

class Account
{
	private:
		string name;
		string number;
		char type;
		double balance;
		bool chequeBook;

	public:
		Account();
		Account(string name, string number, string type, double balance, bool chequeBook);
		void setName_a(string name);
		void setNumber_a(string number);
		void setType_a(char type);
		void setBalance_a(double balance);
		void setChequeBook_a(bool chequeBook);
		double getBalance_a();
};

#endif