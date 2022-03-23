// program to print factors of a given number
//  by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int num, i;
    cout << "Enter the number for which you want to find the factors" << endl;
    cin >> num;
    cout << "The factors are : " << endl;
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
            cout << i << endl;
    }
}