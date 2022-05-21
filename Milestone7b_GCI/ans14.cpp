// program to delete all duplicate elements from an array.

// by-Abhinav Bajaj
#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k = 0, l = 0;
    cout << "Enter the number of elements you want in the array" << endl;
    cin >> n;
    int arr[n];
    int uniq[100];
    cout << "Enter " << n << " elements of the array :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        l = 0;
        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    l++;
                }
            }
        }
        if (l == 0 || l == 1)
        {
            uniq[k] = arr[i];
            k++;
        }
    }
    cout << "The new array with all the unique elements is : ";
    for (i = 0; i < k; i++)
        cout << uniq[i] << " ";
}