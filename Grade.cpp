// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int number1;
    int number2;
    char op;
    do {
        cout << "enter op +,-,*,! ";
        cin >> op;
    } while (op != '+' && op != '-' && op != '*' && op != '!');
    cout << "enter first number";
    cin >> number1;
    cout << "enter second number";
    cin >> number2;
    switch (op)
    {
    case '+': cout << number1 + number2;
        break;
    case '-': cout << number1 - number2;
        break;
    case '*':cout << number1 * number2;
        break;
    case '!':cout << number1 / number2;
        break;
    default: cout << "please don't be stupid";
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
