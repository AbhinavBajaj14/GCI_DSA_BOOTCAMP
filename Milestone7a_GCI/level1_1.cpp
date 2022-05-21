// program to take 10 integer as inputs from user and stor them in an array
//  by-Abhinav Bajaj

#include <iostream>
using namespace std;

int main()
{
    int arr[10], i;
    cout << "Enter 10 integers " << endl;
    for (i = 0; i < 10; i++)
        cin >> arr[i];

    cout << "The elements of the array are " << endl;
    for (i = 0; i < 10; i++)
        cout << arr[i] << " ";
}