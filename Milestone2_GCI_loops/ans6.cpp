// program to print sum of all natural numbers from 1 to n
//   by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int i = 1, sum = 0, num;
    cout << "Enter the number till you want the sum of numbers" << endl;
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        sum += i;
    }
    cout << "The sum is " << sum << endl;
}