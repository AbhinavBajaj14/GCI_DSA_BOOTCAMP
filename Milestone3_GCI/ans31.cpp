// program to find all armstrong numbers between 1 and n
//   by-Abhinav Bajaj

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i, num1, num, num2, j = 0, n, sum = 0, end;
    cout << "Enter the number till you want to find armstrong numbers " << endl;
    cin >> end;
    cout << "Armstrong numbers till " << end << " are :\n";

    for (num = 1; num < end; num++)
    {
        j = 0;
        sum = 0;
        num1 = num;
        num2 = num;

        while (num1 > 0)
        {
            j++;
            num1 /= 10;
        }

        while (num2 > 0)
        {
            n = num2 % 10;
            sum = sum + pow(n, j);

            num2 = num2 / 10;
        }
        if (sum == num)
            cout << num << "\t";
    }
}