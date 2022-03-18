// program to print natural numbers from n to 1
//   by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int i = 1, num;
    cout << "Enter the numbers from which you want the natural numbers" << endl;
    cin >> num;
    cout << "The natural numbers from " << num << " to 1 are : " << endl;
    while (num >= 1)
    {
        cout << num << endl;
        num--;
    }
    return 0;
}