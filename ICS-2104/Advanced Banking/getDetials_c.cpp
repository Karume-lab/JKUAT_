#include "main.hpp"

int getDetails_c()
{
	ofstream of;
    fstream f;
	string word;
   
    of.open("data_c.txt", ios::app);
    if (!of)
        cout << "No such file found";
	f.open("data_c.txt");
	while (f >> word) {
		cout << word << " ";
	}
	f.close();

    return (0);
}