// Using recursion, define a function to know nth term of a Fibonacci series.
//  by-Abhinav Bajaj

#include <iostream>
using namespace std;
int fibb(int);
int main()
{
    int i, n;
    cout << "Enter the term till you want to find the series" << endl;
    cin >> n;
    cout << "The fibonacci series is :" << endl;
    for (i = 0; i <= n; i++)
    {
        cout << fibb(i) << endl;
    }
}
int fibb(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }
    else
    {
        return fibb(x - 1) + fibb(x - 2);
    }
}
