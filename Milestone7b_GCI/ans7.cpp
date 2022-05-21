// program to count total number of negative elements in an array.
// by-Abhinav Bajaj

#include <iostream>
using namespace std;

int main()
{
    int n, i, a = 0;
    cout << "Enter the number of elements you want in the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements of the array :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            a++;
    }
    cout << "There are " << a << " negative elements in the array " << endl;
}
