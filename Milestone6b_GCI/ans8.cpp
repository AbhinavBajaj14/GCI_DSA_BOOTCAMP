// program to print all Armstrong numbers between given interval using function
// by-Abhinav Bajaj

#include <iostream>
using namespace std;
void armstrong(int);
int main()
{
    int num;
    cout << "Enter the numbers till you want the armstrong numbers" << endl;
    cin >> num;
    armstrong(num);
}
void armstrong(int end)
{
    int i, num1, num, num2, j = 0, n, sum = 0;
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