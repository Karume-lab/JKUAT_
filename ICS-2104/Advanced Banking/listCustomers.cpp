#include "main.hpp"



int listCustomers(void)
{
    string line;

	cout << "<-----LIST OF CUSTOMERS----->" << endl;
	cout << "Savings Account Members" << endl;

    ifstream file("data_s.txt");

    if (!file)
	{
        cout << "Failed to open file." << endl;
        return (-1);
    }

    while (getline(file, line))
	{
		istringstream iss(line);
        string name_s, no_s;
        iss >> name_s >> no_s;
        cout << "NAME: " << name_s << " ";
		cout << "ACCOUNT NUMBER: " << no_s << endl;
	}
	cout << endl;
    file.close();

	cout << "Current Account Members" << endl;
	ifstream fl("data_c.txt");

    if (!fl)
	{
        cout << "Failed to open file." << endl;
        return (-1);
    }

    while (getline(fl, line))
	{
		istringstream iss(line);
        string name_c, no_c;
        iss >> name_c >> no_c;
        cout << "NAME: " << name_c << " ";
		cout << "ACCOUNT NUMBER: " << no_c << endl;
	}
	cout << endl;

    file.close();
	return (0);
}
