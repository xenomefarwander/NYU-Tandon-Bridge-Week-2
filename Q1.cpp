#include <iostream>
using namespace std;

const int CENTS_TO_INT = 100;
int main() {

    int quarters, dimes, nickels, pennies;
    float total;
    int totalDollars;
    float totalCents;

    cout << "Please enter number of coins:\n"
         << "# of quarters: ";
    cin >> quarters;
    cout << "# of dimes: ";
    cin >> dimes;
    cout << "# of nickels: ";
    cin >> nickels;
    cout << "# of pennies: ";
    cin >> pennies;

    total = (quarters * 0.25) + (dimes * 0.10) + (nickels * 0.05) + (pennies * 0.01);
    totalDollars = int(total);
    totalCents = (total - totalDollars) * CENTS_TO_INT; // converts cents to whole number

    cout << "The total is " << totalDollars << " dollars and " << totalCents << " cents" << endl;


    return 0;
}
