// program to find largest and smallest element of an array
//  by-Abhinav Bajaj

#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter the number of elements you want in the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter n elements of the array :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];

    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "The largest number of the array is " << max << endl;
    cout << "The smallest number of the array is " << min << endl;
}