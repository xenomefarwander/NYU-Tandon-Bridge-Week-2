#include <iostream>
using namespace std;

int main() {
    int firstInt, secondInt;

    cout << "Please enter two positive integers, separated by a space:" << endl;
    cin >> firstInt >> secondInt;

    cout << firstInt << " + " << secondInt << " = " << firstInt + secondInt << endl;
    cout << firstInt << " - " << secondInt << " = " << firstInt - secondInt << endl;
    cout << firstInt << " * " << secondInt << " = " << firstInt * secondInt << endl;
    cout << firstInt << " / " << secondInt << " = " << float(firstInt) / float(secondInt) << endl;
    cout << firstInt << " div " << secondInt << " = " << firstInt / secondInt << endl;
    cout << firstInt << " mod " << secondInt << " = " << firstInt % secondInt << endl;

    return 0;
}
