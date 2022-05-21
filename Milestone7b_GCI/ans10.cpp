// program to delete an element from an array at specified position.
// by-Abhinav Bajaj
#include <iostream>
using namespace std;

int main()
{
    int n, i, num, pos;
    cout << "Enter the number of elements you want in the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements of the array :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element you want to delete from the array " << endl;
    cin >> num;
    cout << "Enter the position of that element in the array " << endl;
    cin >> pos;

    pos -= 1; // converting position acc to index of the array as 1st position has index 0

    for (i = n - 1; i > pos; i--)
        arr[i - 1] = arr[i]; // starting from end till position of that element...
                             // changing value to its previous memory location
    n--;
    cout << "The final array after deleting the specified element is : " << endl;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}