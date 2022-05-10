// program to check prime, armstrong, perfect number using functions
//     by-Abhinav Bajaj

#include <iostream>
using namespace std;
void prime(int);
void perfect(int);
void armstrong(int);
int main()
{
    int num;
    cout << "Enter any number" << endl;
    cin >> num;

    prime(num);
    perfect(num);
    armstrong(num);
}
void prime(int num)
{
    int i, j = 0;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
            j += 1;
    }
    if (j == 0)
        cout << num << " is a prime number " << endl;
    else
        cout << num << " is not a prime number " << endl;
}
void armstrong(int num)
{

    int num1, n, num2, i, j = 0, sum = 0;

    num1 = num;
    num2 = num;
    while (1)
    {
        num1 = num1 / 10;
        j++;
        if (num1 == 0)
            break;
    }
    for (i = 1; i <= j; i++)
    {
        n = num2 % 10;
        num2 = num2 / 10;
        sum = sum + (n * n * n);
        if (num2 < 10)
            n = num2;
    }

    if (sum == num)
        cout << num << " is an armstrong number" << endl;
    else
        cout << num << " is not an armstrong number" << endl;
}
void perfect(int num)
{
    int sum = 0, i, j = 0;
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum = sum + i;
    }
    if (sum == num)
        cout << num << " is a perfect number" << endl;
    else
        cout << num << " is not a perfect number" << endl;
}
