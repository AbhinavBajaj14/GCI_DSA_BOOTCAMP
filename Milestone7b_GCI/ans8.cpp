// program to copy all elements from an array to another array.
//  by-Abhinav Bajaj
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter the number of elements you want in the array" << endl;
    cin >> n;
    int arr1[n];
    int arr2[n];
    cout << "Enter " << n << " elements of the array :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (i = 0; i < n; i++)
        arr2[i] = arr1[i];
    cout << "The copied array is : " << endl;
    for (i = 0; i < n; i++)
        cout << arr2[i] << " ";
    cout << endl;
}