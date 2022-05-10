// program to find out if a number is prime or not using functions
//    by-Abhinav Bajaj

#include <iostream>
using namespace std;
void prime(int);
int main()
{
    int num;
    cout << "Enter any number" << endl;
    cin >> num;
    prime(num);
}
void prime(int x)
{
    int i, j = 1;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
            j = j + 1;
    }
    if (j == 1)
        cout << "The entered number is prime" << endl;
    else
        cout << "The entered number is not prime" << endl;
}