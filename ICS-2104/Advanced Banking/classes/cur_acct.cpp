#include "../main.hpp"

void Cur_acct::new_c (void)
{
	ofstream file("data_c.dat", ios::app | ios::binary);

	cout << "Enter name: ";
	cin >> name;
	cout << "Enter account number: ";
	cin >> number;
	type = 2;
	chequeBook = true;
	if (file.is_open())
	{
		file.write(reinterpret_cast<char *>(this), sizeof(*this));
		file.close();
		return;
	}

	cout << "Error in opening the database!" << endl;
	return;
}

void Cur_acct::setDeposit_c(void)
{	
	double amount;
	int num, flag = 0;
	fstream file;
	file.open("data_c.dat", ios::in | ios::out | ios::binary);

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
		if (flag == 0)
			cout << "User does not exist!"<< endl;
	}
	else
		cout << "Could not open file!\n" << endl;
}

void Cur_acct::setWithdraw_c(void)
{
	double with;
	int num, flag = 0;
	fstream file;
	double min = CUR_MIN;
	double serv_charge;
	file.open("data_c.dat", ios::in | ios::out | ios::binary);

	cout << "Enter the account number: " << endl;
	cin >> num;
	cout << "Enter the amount to be withdrawn: " << endl;
	cin >> with;
	serv_charge = with * SERVICE_CHARGE;
	if (file.is_open())
	{
		file.seekg(0);

		while (file.read(reinterpret_cast<char *>(this), sizeof(*this)))
		{
			if ((*this).number == num)
			{
				if (with > (*this).balance)
					cout << "Invalid withdraw amount!\n" << endl;
				else
				{
					(*this).balance -= with;
					if (min > (*this).balance)
					{
						if ((*this).balance > serv_charge )
							(*this).balance -= serv_charge;
					}
					file.seekp(-sizeof(*this), ios::cur);
					file.write(reinterpret_cast<char *>(this), sizeof(*this));
					flag = 1;
					break;
				}
				flag = 1;
				break;
			}
		}
		file.close();
		if (flag == 0)
			cout << "User does not exist!"<< endl;
	}
	else
		cout << "Could not open file!\n" << endl;
}

void Cur_acct::getBalance_c(void)
{
	int num, flag;
	fstream file;
	file.open("data_c.dat", ios::in | ios::out | ios::binary);

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
		if (flag == 0)
			cout << "User does not exist!"<< endl;
		file.close();
	}
	else
		cout << "Could not open file!\n" << endl;
}

void Cur_acct::delete_c(void)
{
	int num, flag = 0;
	ifstream file;
	ofstream new_file;


	file.open("data_c.dat", ios::in | ios::out | ios::binary);

	cout << "Enter the account number: " << endl;
	cin >> num;

	if (file.is_open())
	{
		file.seekg(0);
		new_file.open("temp_c.dat", ios::binary | ios::app);
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
				remove("temp_c.dat");
			}
			else
			{
				remove("data_c.dat");
				rename("temp_c.dat", "data_c.dat");
			}
		}
	}
	else
		cout << "Could not open file!\n" << endl;
}

void Cur_acct::update_c(void)
{

}