#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout << "Enter a number" << endl;
    cin >> num1;
    if (num1 < 0)
        cout << num1 << " is a negative number" << endl;
    else if (num1 == 0)
        cout << num1 << " is zero" << endl;
    else
        cout << num1 << " is a positive number" << endl;
}