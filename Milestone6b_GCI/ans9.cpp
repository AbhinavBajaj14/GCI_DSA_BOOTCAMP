// program to print all Perfect numbers between 1 to n using functions.
// by-Abhinav Bajaj

#include <iostream>
using namespace std;
void perfect(int);
int main()
{
    int num;
    cout << "Enter the number till you want the perfect numbers" << endl;
    cin >> num;
    perfect(num);
}
void perfect(int n)
{
    int num, i, j, sum = 0;
    cout << "Perfect numbers between 1 and n are : " << endl;
    for (i = 1; i <= n; i++)
    {
        sum = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
                sum = sum + j;
        }
        if (sum == i)
            cout << sum << endl;
    }
}