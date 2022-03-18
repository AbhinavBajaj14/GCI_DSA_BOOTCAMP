// program to find sum of all even numbers between 1 and n
//   by-Abhinav Bajaj

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i = 0, n, sum = 0;
    cout << "Enter the number till you want the sum" << endl;
    cin >> n;
    for (i; i <= n; i = i + 2)
    {
        sum = sum + i;
    }
    cout << "The sum is " << sum << endl;
}