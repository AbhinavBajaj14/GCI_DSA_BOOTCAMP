//
//   by-Abhinav Bajaj

#include <iostream>
using namespace std;
int perfect(int);
int main()
{
    int n;

    cout << "Enter the number till you want the perfect numbers " << endl;
    cin >> n;
    cout << "Perfect numbers between 1 and" << n << " are : " << endl;
    perfect(n);
}
int perfect(int n)
{
    int num, i, j, sum = 0;
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