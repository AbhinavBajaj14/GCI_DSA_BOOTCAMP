// Program to left rotate an array

// by-Abhinav Bajaj
#include <iostream>
using namespace std;

int main()
{
    int n, i, j, start, num;
    cout << "Enter the number of elements you want in the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements of the array :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter number of times to left rotate: ";
    cin >> num;
    num = num % n;
    for (j = 1; j <= num; j++)
    {
        start = arr[0];
        for (i = 0; i < n; i++)
        {

            arr[i] = arr[i + 1];
        }
        arr[n - 1] = start;
    }
    cout << "The array after rotation :";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
}