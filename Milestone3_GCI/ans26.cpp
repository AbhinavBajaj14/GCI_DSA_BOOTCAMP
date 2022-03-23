// program to check whether a number is Prime number or not.
//   by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int num, i, j = 0;
    cout << "Enter the number you want to check " << endl;
    cin >> num;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
            j += 1;
    }
    if (j == 0)
        cout << num << " is a prime number " << endl;
    else
        cout << num << " is not a prime number " << endl;
}