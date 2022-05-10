// Program to find cube using function
//     by-Abhinav Bajaj

#include <iostream>
using namespace std;
int cube(int);
int main()
{
    int num;
    cout << "Enter any number" << endl;
    cin >> num;
    cout << "The cube of the entered number is " << cube(num) << endl;
}
int cube(int x)
{
    return (x * x * x);
}
