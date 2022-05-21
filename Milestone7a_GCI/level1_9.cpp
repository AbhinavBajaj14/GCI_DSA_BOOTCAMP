// Take an array of 10 elements. Split it into middle and store the elements in two dfferent arrays.
//  by-Abhinav Bajaj

#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int arr1[10], arr2[5], arr3[5];

    cout << "Enter 10 elements ";
    for (i = 0; i < 10; i++)
    {
        cin >> arr1[i];
    }
    for (i = 0; i < 5; i++)
        arr2[i] = arr1[i];

    j = 5;
    for (i = 0; i < 5; i++)
    {
        if (j <= 9)
            arr3[i] = arr1[j];
        j++;
    }
    cout << "array containing 1st half" << endl;
    for (i = 0; i < 5; i++)
        cout << arr2[i] << " ";
    cout << "\n array containing 2nd half" << endl;
    for (i = 0; i < 5; i++)
        cout << arr3[i] << " ";
}
