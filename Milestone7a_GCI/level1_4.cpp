// Take 10 integer inputs from user and store them in array Now, copy all the elements in another array
// but in reverse order.

// by-Abhinav Bajaj

#include <iostream>
using namespace std;

int main()
{
    int arr1[10], i, j, arr2[10];
    cout << "Enter 10 integers " << endl;
    for (i = 0; i < 10; i++)
        cin >> arr1[i];

    j = 0;
    for (i = 9; i >= 0; i--)
    {
        arr2[i] = arr1[j];
        j++;
    }
    cout << "The array in reverse order is ";
    for (i = 0; i < 10; i++)
        cout << arr2[i] << " ";
    cout << endl;
}