// function to calculate power of a number raised to other i.e. a^b using recursion
//    by-Abhinav Bajaj

#include <iostream>
#include <math.h>
using namespace std;
int ans(int, int);
int main()
{
    int base, power, sol;
    cout << "Enter the base number " << endl;
    cin >> base;
    cout << "Enter the power " << endl;
    cin >> power;
    sol = ans(base, power);
    cout << "The required answer is " << sol << endl;
}
int ans(int x, int y)
{
    return (pow(x, y));
}