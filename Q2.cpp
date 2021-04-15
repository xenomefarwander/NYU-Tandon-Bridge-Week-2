#include <iostream>
using namespace std;

const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;
const int PENNY = 1;

int main() {
    int dollars, cents;
    int numQuarters, numDimes, numNickels, numPennies;

    cout << "Please enter your amount in the format of dollars and cents separated "
         << "by a space:" << endl;
    cin >> dollars >> cents;
    cout << dollars << " dollars and " << cents << " cents are:" << endl;


    numQuarters = ((dollars * 100) / QUARTER) + (cents / QUARTER);
    cents = cents % QUARTER;

    numDimes = cents / DIME;
    cents = cents % DIME;

    numNickels = cents / NICKEL;
    cents = cents % NICKEL;

    numPennies = cents / PENNY;

    cout << numQuarters << " quarters, " << numDimes << " dimes, "
         << numNickels << " nickels and " << numPennies << " pennies" << endl;

    return 0;
}
