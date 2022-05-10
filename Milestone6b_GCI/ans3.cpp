// program to find maximum and minimum using functions
//    by-Abhinav Bajaj

#include <iostream>
using namespace std;
int max(int);
int min(int);
int main()
{
    int num1, num2;
    cout << "Enter the 1st number " << endl;
    cin >> num1;
    cout << "Enter the 2nd number " << endl;
    cin >> num2;
    cout << "The maximum between the entered numbers is " << max(num1, num2) << endl;
    cout << "The minimum between the entered numbers is " << min(num1, num2) << endl;
}
int max(int a, int b)
{
    return (a > b ? a : b);
}
int min(int a, int b)
{
    return (a < b ? a : b);
}
