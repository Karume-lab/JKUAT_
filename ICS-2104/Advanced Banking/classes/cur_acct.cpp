#include "../main.hpp"

double Cur_acct::getBalance_c()
{
	return (getBalance_a());
}
void Cur_acct::new_c (void)
{
	ofstream file("data_c.txt", ios::app);

	cout << "Enter name: ";
	cin >> name;
	cout <<"Enter account number: ";
	cin >> number;
	type = 1;
	chequeBook = true;
	if (file.is_open())
	{
		file << name << " ";
		file << number << " ";
		file << type << " ";
		file << balance << " ";
		file << chequeBook << endl;

		file.close();
		return;
	}

	cout << "Error in opening the database!" << endl;
	return;
}
