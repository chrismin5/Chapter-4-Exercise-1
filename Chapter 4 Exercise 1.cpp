/*  Program File Name: Chapter 4 Exercise 1
    Programmer: Christian Min
    Date: 10/18/26
    Requirements:
    Write a program that asks the user to enter two different integers. The programs should use the conditional operator to determine which number is the smaller, and which is the larger.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int integerOne, integerTwo;     //to hold the value for each of the two variables

    cout << "Enter the first integer: ";
    cin >> integerOne;
    cout << "\n" << "Enter the second integer, different than the previous one: ";
    cin >> integerTwo;

    int smallerInteger = (integerOne < integerTwo) ? integerOne : integerTwo;   //use of conditional operator to compare the values entered by the user, and sets the correct label to each of the two integers;
    int largerInteger = (integerOne > integerTwo) ? integerOne : integerTwo;

    cout << "\n" << "The smaller integer is: " << smallerInteger;       //displays the result of which entered integer is smaller or larger
    cout << "\n" << "The larger integer is: " << largerInteger << "\n";

    return 0;

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
