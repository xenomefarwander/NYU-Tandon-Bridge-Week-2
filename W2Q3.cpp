#include <iostream>
using namespace std;

int main() {
    int johnDays, johnHours, johnMinutes;
    int billDays, billHours, billMinutes;
    int totalDays, totalHours, totalMinutes;
    int carryMinutes, carryHours;

    cout << "Please enter the number of days John has worked: ";
    cin >> johnDays;
    cout << "Please enter the number of hours John has worked: ";
    cin >> johnHours;
    cout << "Please enter the number of minutes John has worked: ";
    cin >> johnMinutes;
    cout>> endl;

    cout << "Please enter the number of days Bill has worked: ";
    cin >> billDays;
    cout << "Please enter the number of hours Bill has worked: ";
    cin >> billHours;
    cout << "Please enter the number of minutes Bill has worked: ";
    cin >> billMinutes;
    cout>> endl;

    carryMinutes = (johnMinutes + billMinutes) / 60;
    totalMinutes = (johnMinutes + billMinutes) % 60;
    carryHours = (johnHours + billHours + carryMinutes) / 24;
    totalHours = (johnHours + billHours + carryMinutes) % 24;
    totalDays = (johnDays + billDays + carryHours);

    cout << "The total time both of them have worked is: "
         << totalDays << " days, " << totalHours << " hours and "
         << totalMinutes << " minutes." << endl;

    return 0;
}
