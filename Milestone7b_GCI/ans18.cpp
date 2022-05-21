// program to search element in an array

// by-Abhinav Bajaj
#include <iostream>
using namespace std;

int main()
{
    int n, i, num;
    cout << "Enter the number of elements you want in the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements of the array :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element that you want to search : " << endl;
    cin >> num;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
            cout << num << " is found at index number " << i + 1;
    }

    cout << endl;
}