// program to merge two array to third array.

// by-Abhinav Bajaj
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, i, j = 0;
    cout << "Enter the number of elements you want in the 1st array" << endl;
    cin >> num1;
    int arr1[num1];
    cout << "Enter " << num1 << " elements of the 1st array :" << endl;
    for (i = 0; i < num1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the number of elements you want in the 2nd array" << endl;
    cin >> num2;
    int arr2[num2];
    cout << "Enter " << num2 << " elements of the 2nd array :" << endl;
    for (i = 0; i < num2; i++)
    {
        cin >> arr2[i];
    }

    num3 = num1 + num2;
    int arr3[num3];

    for (i = 0; i < num3 / 2; i++)
        arr3[i] = arr1[i];

    for (i = (num3 / 2); i < num3; i++)
    {

        if (j < num2)
            arr3[i] = arr2[j];
        j++;
    }
    cout << "The merged array is : ";
    for (i = 0; i < num3; i++)
        cout << arr3[i] << " ";
}