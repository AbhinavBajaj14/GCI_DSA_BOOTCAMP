// program to calculate product of digits of a number
//   by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int num, n, product = 1;
    cout << "Enter any number " << endl;
    cin >> num;
    while (1)
    {
        n = num % 10;
        product = (product * n);
        num = num / 10;
        if (num == 0)
            break;
    }
    cout << "The product of the digits is " << product << endl;
}