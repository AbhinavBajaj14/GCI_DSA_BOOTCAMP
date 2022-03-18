// program to find absolute value of a number
// by-Abhinav Bajaj
#include <iostream>
using namespace std;
int main()
{
    int num1, ans;
    cout << "Enter a number to find its absolute value" << endl;
    cin >> num1;
    if (num1 >= 0)
        cout << "The absolute value is " << num1 << endl;
    else
    {
        ans = num1 + (-2 * num1);
        cout << "The absolute value is " << ans << endl;
    }
}