#include "main.hpp"

int getDetails_s()
{
	ofstream of;
    fstream f;
	string word;

    of.open("data_s.txt", ios::app);
    if (!of)
        cout << "No such file found";
	f.open("data_s.txt");
	while (f >> word) {
		cout << word << " ";
	}
	f.close();

    return (0);
}