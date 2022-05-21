// program to check if an array is palindromic or not
//  by-Abhinav Bajaj

#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the number of elements you want in the array" << endl;
    cin >> n;
    int arr1[n];
    int arr2[n];
    cout << "Enter n elements of the array :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    j = n - 1;
    for (i = 0; i < n; i++)
    {
        if (j >= 0)
            arr2[i] = arr1[j];
        j--;
    }

    int k = 0;
    for (i = 0; i < n; i++)
    {
        if (arr1[i] != arr2[i])
            k++;
    }
    if (k == 0)
        cout << "The array is palindromic " << endl;
    else
        cout << "The array is not palindromic" << endl;
}