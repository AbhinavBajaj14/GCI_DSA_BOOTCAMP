//  program to print the sum of two numbers entered by user using function
//   by-Abhinav Bajaj

#include <iostream>
using namespace std;
int add(int, int);
int main()
{
    int num1, num2;
    cout << "Enter any two numbers : " << endl;
    cin >> num1 >> num2;

    cout << "Addition of numbers is : " << add(num1, num2) << endl;
}
int add(int x, int y)
{
    int z;
    z = x + y;
    return z;
}