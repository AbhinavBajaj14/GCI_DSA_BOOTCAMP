// program to find greater number between any 2 numbers
// by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the 1st number " << endl;
    cin >> num1;
    cout << "Enter the 2nd number " << endl;
    cin >> num2;
    if (num1 > num2)
        cout << num1 << "is greater than " << num2 << endl;
    else
        cout << num2 << " is greater than " << num1 << endl;
    return 0;
}