// Program to right rotate an array

// by-Abhinav Bajaj
#include <iostream>
using namespace std;

int main()
{
    int n, i, j, last, num;
    cout << "Enter the number of elements you want in the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements of the array :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter number of times to right rotate: ";
    cin >> num;
    num = num % n;
    for (j = 1; j <= num; j++)
    {
        last = arr[n - 1];
        for (i = n - 1; i > 0; i--)
        {

            arr[i] = arr[i - 1];
        }
        arr[0] = last;
    }
    cout << "The array after rotation :";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
}