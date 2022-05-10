// program to find factorial of a number using functions
//    by-Abhinav Bajaj

#include <iostream>
using namespace std;
int fact(int);
int main()
{
    int num;
    cout << "Enter any number" << endl;
    cin >> num;
    cout << "The factorial of the entered number is " << fact(num) << endl;
}
int fact(int x)
{
    int i, fac = 1;
    for (i = 1; i <= x; i++)
        fac = fac * i;
    return fac;
}