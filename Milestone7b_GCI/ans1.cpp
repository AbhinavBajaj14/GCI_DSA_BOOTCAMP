// program to read and print elements of array
// by-Abhinav Bajaj
#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cout << "Enter the number of elements you want in the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter n elements of the array :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The elements of array are : " << endl;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}