#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    ifstream inputFile("example.txt");

    if (!inputFile) {
        cerr << "Failed to open file." << endl;
        return 1;
    }

    string line;
    while (getline(inputFile, line)) {
        istringstream iss(line);
        string word1, word2;
        iss >> word1 >> word2;
        cout << word1 << " " << word2 << endl;
    }

    inputFile.close();
    return 0;
}
