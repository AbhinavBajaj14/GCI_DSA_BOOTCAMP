// program to find second largest element in an array.

// by-Abhinav Bajaj
#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cout << "Enter the number of elements you want in the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements of the array :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max1 = arr[0], max2;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max1)
            max1 = arr[i];
    }
    max2 = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max2 && arr[i] < max1)
            max2 = arr[i];
    }
    cout << "The second largest element of the array is " << max2 << " " << endl;
}