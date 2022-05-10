// program to check whether a number is odd or even using functions
//     by-Abhinav Bajaj

#include <iostream>
using namespace std;
void check(int);
int main()
{
    int num;
    cout << "Enter any number" << endl;
    cin >> num;
    check(num);
}
void check(int x)
{
    if (x % 2 == 0)
        cout << "The entered number is even" << endl;
    else
        cout << "The entered number is odd" << endl;
}