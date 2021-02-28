#include <iostream>
#include "income.h"
#include <fstream>
#include "sstream"

using namespace std;

int computeTaxes(int income);

int main() {

    string line;
    ifstream myfile("incomes.txt");

    if (myfile.is_open()) {
        while (getline(myfile, line)) {

            stringstream ss(line);
            string value;
            int totalTax = 0;

            while(getline(ss, value, ' ' )) {
                int currentTax = computeTaxes(stoi(value));
                totalTax += currentTax;
            }

            cout << "Taxes Owed: " << totalTax << endl;
        }
        myfile.close();
    } else cout << "Unable to open file";

    return EXIT_SUCCESS;
}

int computeTaxes(int income) {
    int totalToReturn = 0;

    while (income > 200) {
        int amountToAdd = ((income / 5) - 40);
        totalToReturn += amountToAdd;
        income = amountToAdd;
    }

    return totalToReturn;
}