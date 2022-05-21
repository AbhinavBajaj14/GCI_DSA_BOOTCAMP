// program to put even and odd elements of array in two separate array.

// by-Abhinav Bajaj
#include <iostream>
using namespace std;

int main()
{
    int n, i, odd_count = 0, even_count = 0, x = 0, y = 0;
    cout << "Enter the number of elements you want in the array(max=100)" << endl;
    cin >> n;
    int arr[n];
    int odd[100], even[100];
    cout << "Enter " << n << " elements of the array :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[x] = arr[i];
            x++;
        }
        else
        {
            odd[y] = arr[i];
            y++;
        }
    }
    cout << "The even element array is : ";
    for (i = 0; i < x; i++)
        cout << even[i] << " ";

    cout << endl;

    cout << "The odd element array is : ";
    for (i = 0; i < y; i++)
        cout << odd[i] << " ";
}