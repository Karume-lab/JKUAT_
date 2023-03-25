#include "account.hpp"

Account::Account()
{
	balance = 0.00;
}

Account::Account(string name, string number, string type, double balance, bool chequeBook)
{
	name = name;
	number = number;
	type = type;
	balance = balance;
	chequeBook = chequeBook;
}

void Account::setName_a(string name)
{
	name = name;
}

void Account::setNumber_a(string number)
{
	number = number;
}

void Account::setType_a(char type)
{
	type = type;
}

void Account::setBalance_a(double balance)
{
	balance = balance;
}

void Account::setChequeBook_a(bool chequeBook)
{
	chequeBook = chequeBook;
}

double Account::getBalance_a()
{
	return (balance);
}
