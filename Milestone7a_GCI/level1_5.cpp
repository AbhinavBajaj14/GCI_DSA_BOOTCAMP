// program to find the sum and product of all elements of an array.
//  by-Abhinav Bajaj

#include <iostream>
using namespace std;

int main()
{
    int n, i, sum = 0, product = 1;
    cout << "Enter the number of elements you want in the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter "<<n<<" elements of the array :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }
    cout << "The sum of all the elements of the array is " << sum << endl;
    cout << "The product of all the elements of the array is " << product << endl;
}