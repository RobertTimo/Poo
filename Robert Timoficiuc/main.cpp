#include <iostream>
#include <fstream>
#include <string>
#include "Animal.h"
#include "Caine.h"
#include "Pisica.h"

using namespace std;

int getLastID() {
    ifstream inFile("last_id.txt");
    int lastID = 0;
    if (inFile.is_open()) {
        inFile >> lastID;
        inFile.close();
    }
    return lastID;
}

void saveLastID(int lastID) {
    ofstream outFile("last_id.txt");
    if (outFile.is_open()) {
        outFile << lastID;
        outFile.close();
    }
}

int main() {
    int lastID = getLastID();

    ofstream outFile("animale.txt", ios::app);

    if (outFile.is_open()) {
        Caine caine("Max", 3, "Labrador");
        Pisica pisica("Mimi", 2, "British Shorthair");

        caine.setID(lastID + 1);
        pisica.setID(lastID + 2);

        outFile << caine.getInfo() << endl;
        outFile << pisica.getInfo() << endl;

        outFile.close();

        saveLastID(lastID + 2);
    }
    else {
        cout << "Eroare la deschiderea fisierului de iesire!" << endl;
    }

    ifstream inFile("animale.txt");

    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }

        inFile.close();
    }
    else {
        cout << "Eroare la deschiderea fisierului de intrare!" << endl;
    }

    return 0;
}
