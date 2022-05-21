// program to print all negative elements in an array.

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
    cout << "The negative elements are : " << endl;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            cout << arr[i] << " ";
    }
    cout << endl;
}