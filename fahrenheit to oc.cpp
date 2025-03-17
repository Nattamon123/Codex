// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    char unit;
    double temp;
    cout << "would you want to change to (f/c)";
    cin >> unit;

    if (unit == 'F' || unit == 'f') {
        cout << "enter temp in celsis";
        cin >> temp;
        temp = temp * 1.8 + 32;
        cout << temp;
    }
    else if (unit == 'C' || unit == 'c') {
        cout << "enter temp in fahrenheit";
        cin >> temp;
        temp = (temp - 32) / 1.8;
        cout << temp;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
