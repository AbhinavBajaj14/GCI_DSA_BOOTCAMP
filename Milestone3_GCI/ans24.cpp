// program to find HCF of two numbers
//    by-Abhinav Bajaj

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num1, num2, i, j, n;
    cout << "Enter the greater number" << endl;
    cin >> num1;
    cout << "Enter the smaller number" << endl;
    cin >> num2;

    for (i = 1; i <= num1; i++)
    {
        for (j = 1; j <= num2; j++)
        {
            if ((num1 % j == 0) && (num2 % j == 0))
                n = j;
        }
    }
    cout << "The H.C.F of the entered numbers is " << n << endl;
}