// program to count total number of even and odd elements in an array.

// by-Abhinav Bajaj
#include <iostream>
using namespace std;

int main()
{
    int n, i, a = 0, b = 0;
    cout << "Enter the number of elements you want in the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements of the array :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
            a++;

        if (arr[i] % 2 == 0)
            b++;
    }
    cout << "Number of odd numbers are : " << a << endl;
    cout << "Number of even numbers are : " << b << endl;
}