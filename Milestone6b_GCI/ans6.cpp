// program to find prime numbers in given range using functions
// by-Abhinav Bajaj

#include <iostream>
using namespace std;
void prime(int);
int main()
{
    int num;
    cout << "Enter the number till you want the prime numbers" << endl;
    cin >> num;
    prime(num);
}
void prime(int n)
{

    int i = 2, j = 2, k = 0;
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