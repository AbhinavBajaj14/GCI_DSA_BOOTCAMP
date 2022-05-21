// program to find sum of all array elements. - using recursion.

// by-Abhinav Bajaj
#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0;
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
        sum += arr[i];
    }
    cout << "The sum of all the elements of the array is " << sum << endl;
}