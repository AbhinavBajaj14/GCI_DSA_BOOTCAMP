// program to find all armstrong numbers between 1 and n
//   by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int i, num1, num, num2, j = 0, n, sum = 0;
    cout << "Enter the number till you want to find armstrong numbers " << endl;
    cin >> n;
    cout << "Armstrong numbers between 1 and n are :\n";

    for (num = 100; num < n; num++)
    {
        do
        {
            if (num < 10)
            {
                j = 1;
                break;
            }
            else
            {
                num1 = num;
                num1 = num1 / 10;
                j++;
            }
        } while (num1 != 0);

        cout << j << "\t";
        for (i = 1; i <= j; i++)
        {
            num2 = num;
            if (num2 < 10)
                n = num2;
            else
            {
                n = num2 % 10;
                num2 = num2 / 10;
            }
            sum = sum + (n * n * n);
        }
        if (sum == num)
            cout << num << "\t";
        continue;
    }
}