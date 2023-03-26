#include "../main.hpp"

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
void Account::listCustomers(void)
{
	int flag;
	fstream file, fl;
	file.open("data_c.dat", ios::in | ios::out | ios::binary);

	if (file.is_open())
	{
		file.seekg(0);
		while (file.read(reinterpret_cast<char *>(this), sizeof(*this)))
		{
			cout << "NAME: " << (*this).name << endl;
			cout << "ACOUNT NUMBER: " << (*this).number << endl;
		}
		file.seekp(-sizeof(*this), ios::cur);
		file.write(reinterpret_cast<char *>(this), sizeof(*this));
		file.close();
	}
	else
		cout << "Could not open file!\n" << endl;

	fl.open("data_s.dat", ios::in | ios::out | ios::binary);

	if (fl.is_open())
	{
		fl.seekg(0);
		while (fl.read(reinterpret_cast<char *>(this), sizeof(*this)))
		{
			cout << "NAME: " << (*this).name << endl;
			cout << "ACOUNT NUMBER: " << (*this).number << endl;
		}
		fl.seekp(-sizeof(*this), ios::cur);
		fl.write(reinterpret_cast<char *>(this), sizeof(*this));
		fl.close();
	}
	else
		cout << "Could not open file!\n" << endl;
}
