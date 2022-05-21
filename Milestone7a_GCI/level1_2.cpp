// Take 10 integer inputs from user and store them in an array. Again ask user to give a number.
// Now, tell user whether that number is present in array or not.
//  by-Abhinav Bajaj

#include <iostream>
using namespace std;

int main()
{

    int arr[10], i, num, j = 0;
    cout << "Enter 10 integers " << endl;
    for (i = 0; i < 10; i++)
        cin >> arr[i];

    cout << "Enter the number you want to check if it is present in the array ";
    cin >> num;
    for (i = 0; i < 10; i++)
    {
        if (arr[i] == num)
        {
            cout << "The number " << num << " is present in the array at index numeber " << i << " " << endl;
            j = 1;
        }
    }
    if (j == 0)
        cout << "The number " << num << " is not present in the array" << endl;
}