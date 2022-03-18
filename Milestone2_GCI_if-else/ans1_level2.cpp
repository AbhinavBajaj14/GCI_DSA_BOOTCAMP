// program to test if entered date is a leap year or not
// by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter the year you want to check" << endl;
    cin >> year;

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        cout << "The entered date is in a leap year" << endl;
    }
    else
    {
        cout << "The entered date is not in a leap year" << endl;
    }
}
