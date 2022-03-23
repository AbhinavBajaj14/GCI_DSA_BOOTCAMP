// program to calculate sum of digits of a number
//   by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int num, n, sum = 0;
    cout << "Enter any number " << endl;
    cin >> num;
    while (1)
    {
        n = num % 10;
        sum = sum + n;
        num = num / 10;
        if (num == 0)
            break;
    }
    cout << "The sum is " << sum << endl;
}