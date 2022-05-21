// program to print all unique elements in the array.

// by-Abhinav Bajaj
#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k = 0;
    cout << "Enter the number of elements you want in the array" << endl;
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " elements of the array :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The unique elements are : " << endl;
    for (i = 0; i < n; i++)
    {
        k = 0;
        for (j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            else
            {
                if (arr[i] == arr[j])
                {
                    k++;
                }
            }
        }
        if (k == 0)
        {
            cout << arr[i] << " ";
        }
    }
}