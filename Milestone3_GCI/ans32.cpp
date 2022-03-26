// program to check if a number is perfect number or not
//   by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int sum = 0, num, i, j = 0;
    cout << "Enter the number you want to check " << endl;
    cin >> num;
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum = sum + i;
    }
    if (sum == num)
        cout << "The entered number is a perfect number" << endl;
    else
        cout << "The entered number is not a perfect number" << endl;
}
