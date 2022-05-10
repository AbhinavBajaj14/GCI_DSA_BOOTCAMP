// program to find prime factors of a number
//   by-Abhinav Bajaj

#include <iostream>
#include <math.h>
using namespace std;
int prime_fact(int);
int main()
{
    int n;
    cout << "Enter any number" << endl;
    cin >> n;
    prime_fact(n);
}
int prime_fact(int n)
{
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n / 2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }

    if (n > 2)
        cout << n << " ";
}