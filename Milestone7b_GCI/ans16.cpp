// program to find reverse of an array.
// by-Abhinav Bajaj
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter the number of elements you want in the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements of the array :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The array in reverse is : ";
    for (i = n - 1; i >= 0; i--)
        cout << arr[i] << " ";
}