// program that returns the product of two numbers by functions
//    by-Abhinav Bajaj

#include <iostream>
using namespace std;
int ans(int, int);
int main()
{
    int num1, num2;
    cout << "Enter any two numbers " << endl;
    cin >> num1 >> num2;
    cout << "The product of the entered numbers is " << ans(num1, num2) << endl;
}
ans(int x, int y)
{
    return x * y;
}