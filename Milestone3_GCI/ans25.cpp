// program to find LCM of two numbers
//   by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, ans, i = 1;
    cout << "Enter the greater number" << endl;
    cin >> num1;
    cout << "Enter the smaller number" << endl;
    cin >> num2;
    if (num1 % num2 == 0)
    {
        cout << "The LCM is " << num1 << endl;
    }
    while (1)
    {

        ans = num1 * i;
        if (ans % num2 == 0)
        {
            cout << "The LCM is " << ans << endl;
            break;
        }
        i++;
    }
}
