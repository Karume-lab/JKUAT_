#include "../main.hpp"

void Sav_acct::new_s (void)
{
	ofstream file("data_s.dat",ios::app | ios::binary);

	cout << "Enter name: ";
	cin >> name;
	cout <<"Enter account number: ";
	cin >> number;
	type = 1;
	chequeBook = false;
	if (file.is_open())
	{
		file.write(reinterpret_cast<char *>(this), sizeof(*this));
		file.close();
		return;
	}

	cout << "Error in opening the database!" << endl;
	return;
}

void Sav_acct::setDeposit_s(void)
{	
	double amount;
	int num, flag = 0;
	fstream file;
	file.open("data_s.dat", ios::in | ios::out | ios::binary);

	cout << "Enter the account number: " << endl;
	cin >> num;
	cout << "Enter the amount to be deposited: " << endl;
	cin >> amount;

	if (file.is_open())
	{
		file.seekg(0);
		while (file.read(reinterpret_cast<char *>(this), sizeof(*this)))
		{
			if ((*this).number == num)
			{
				(*this).balance += amount;
				flag = 1;
				break;
			}
		}
		file.seekp(-sizeof(*this), ios::cur);
		file.write(reinterpret_cast<char *>(this), sizeof(*this));
		file.close();
		if (flag == 0)
			cout << "User does not exist!"<< endl;
	}
	else
		cout << "Could not open file!\n" << endl;
}

void Sav_acct::setWithdraw_s(void)
{
	double with;
	int num, flag = 0;
	fstream file;
	file.open("data_s.dat", ios::in | ios::out | ios::binary);

	cout << "Enter the account number: " << endl;
	cin >> num;
	cout << "Enter the amount to be withdrawn: " << endl;
	cin >> with;

	if (file.is_open())
	{
		file.seekg(0);

		while (file.read(reinterpret_cast<char *>(this), sizeof(*this)))
		{
			if ((*this).number == num)
			{
				if (with > (*this).balance)
					cout << "Invalid withdraw amount!" << endl;
				else
				{
					(*this).balance -= with;
					cout << "LJSHDJLFHSDLJH: " << (*this).balance << endl;
					file.seekp(-sizeof(*this), ios::cur);
					file.write(reinterpret_cast<char *>(this), sizeof(*this));
					flag = 1;
					break;
				}
			}
		}
		file.close();
		if (flag == 0)
			cout << "User does not exist!"<< endl;
	}
	else
		cout << "Could not open file!\n" << endl;
}

void Sav_acct::getBalance_s(void)
{
	int num, flag;
	fstream file;
	file.open("data_s.dat", ios::in | ios::out | ios::binary);

	cout << "Enter the account number: " << endl;
	cin >> num;

	if (file.is_open())
	{
		file.seekg(0);
		while (file.read(reinterpret_cast<char *>(this), sizeof(*this)))
		{
			if ((*this).number == num)
			{
				cout << "Your account balance is: " << (*this).balance << endl;
				break;
			}
		}
		file.seekp(-sizeof(*this), ios::cur);
		file.write(reinterpret_cast<char *>(this), sizeof(*this));
		file.close();
		if (flag == 0)
			cout << "User does not exist!"<< endl;
	}
	else
		cout << "Could not open file!\n" << endl;
}

void Sav_acct::delete_s(void)
{
	int num, flag = 0;
	fstream file;

	file.open("data_s.dat", ios::in | ios::out | ios::binary);
	cout << "Enter the account number: " << endl;
	cin >> num;

	if (file.is_open())
	{
		file.seekg(0);
		while (file.read(reinterpret_cast<char *>(this), sizeof(*this)))
		{
			if ((*this).number == num)
			{
				cout << "Enter the new name" << endl;
				cin >> (*this).name;
				file.seekp(-sizeof(*this), ios::cur);
				file.write(reinterpret_cast<char *>(this), sizeof(*this));
				file.close();
				flag = 1;
			}
		}

		file.close();
	}
	else
		cout << "Could not open file!\n" << endl;
}

void Sav_acct::update_s(void)
{
	int num, flag = 0;
	ifstream file;
	ofstream new_file;


	file.open("data_s.dat", ios::in | ios::out | ios::binary);

	cout << "Enter the account number: " << endl;
	cin >> num;

	if (file.is_open())
	{
		file.seekg(0);
		new_file.open("temp_s.dat", ios::binary | ios::app);
		if (new_file.is_open())
		{
			while (file.read(reinterpret_cast<char *>(this), sizeof(*this)))
			{
				if ((*this).number == num)
					flag = 1;
				else
					new_file.write(reinterpret_cast<char *>(this), sizeof(*this));
			}
			
			file.close();
			new_file.close();
			if (flag == 0)
			{
				cout << "Customer not found!" << endl;
				remove("temp_s.dat");
			}
			else
			{
				remove("data_s.dat");
				rename("temp_s.dat", "data_s.dat");
			}
		}
	}
	else
		cout << "Could not open file!\n" << endl;
}
