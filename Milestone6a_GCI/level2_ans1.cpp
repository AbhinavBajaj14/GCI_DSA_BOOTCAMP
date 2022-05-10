// a program to print multiplication table using recursion
//    by-Abhinav Bajaj

#include <iostream>
using namespace std;
void table(int, int);
int main()
{
    int num;
    cout << "Enter any number" << endl;
    cin >> num;
    table(num, 1);
}
void table(int num, int i)
{
    if (i > 1)
    {
        cout << num << " * " << i << " = " << num * i << endl;
    }
    table(num, i + 1);
}