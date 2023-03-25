#include "../main.hpp"

double Sav_acct::getBalance_s(void)
{
	return (getBalance_a());
}

void Sav_acct::new_s (void)
{
	ofstream file("data_s.txt",ios::app);

	cout << "Enter name: ";
	cin >> name;
	cout <<"Enter account number: ";
	cin >> number;
	type = 1;
	chequeBook = false;
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
