// program to print natural numbers from 1 to n
//   by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int i = 1, num;
    cout << "Enter the numbers till what you want the natural numbers" << endl;
    cin >> num;
    cout << "The natural numbers till " << num << " are : " << endl;
    while (i <= num)
    {
        cout << i << endl;
        i++;
    }
    return 0;
}