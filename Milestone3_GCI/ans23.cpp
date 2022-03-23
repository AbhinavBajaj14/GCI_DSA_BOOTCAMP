// program to calculate factorial of a number
//   by-Abhinav Bajaj

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i, num, fact = 1;
    cout << "Enter the number for which you want to find the factorial" << endl;
    cin >> num;
    for (i = 1; i <= num; i++)
        fact = fact * i;

    cout << "The factorial of " << num << " is " << fact << endl;
}