// program to print all Prime numbers between 1 to n.
//  by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int n, i = 2, j = 2, k = 0, sum = 0;
    cout << "Enter the number till you want the prime numbers" << endl;
    cin >> n;
    cout << "The prime numbers are\t";
    for (i = 2; i <= n; i++)
    {
        k = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                k = 1;
                break;
            }
        }
        if (k == 0)
        {
            cout << i << "\t";
        }
    }
}