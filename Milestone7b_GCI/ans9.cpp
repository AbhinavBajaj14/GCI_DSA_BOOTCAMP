// program to insert an element in array
// by-Abhinav Bajaj

#include <iostream>
using namespace std;

int main()
{
    int n, i, num, pos;
    cout << "Enter the number of elements you want in the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements of the array :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element you want to insert in the array " << endl;
    cin >> num;
    cout << "Enter the position at which you want to add the element " << endl;
    cin >> pos;
    for (i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = num;
    n++;
    cout << "The final array after insertion is " << endl;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}