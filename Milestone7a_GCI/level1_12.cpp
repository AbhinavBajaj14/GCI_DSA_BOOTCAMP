// program to print sum, average of all numbers, smallest and largest element of an array.
//  by-Abhinav Bajaj

#include <iostream>
using namespace std;

int sum(int *, int);
int average(int *, int);
int largest(int *, int);
int smallest(int *, int);

int main()
{
    int n, i;
    cout << "Enter the number of elements you want in the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements of the array :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The sum of all the elements of the array is " << sum(arr, n) << endl;
    cout << "The average of all the elements of the array is " << average(arr, n) << endl;
    cout << "The largest element among all the elements of the array is " << largest(arr, n) << endl;
    cout << "The smallest element among all the elements of the array is " << smallest(arr, n) << endl;
}

int sum(int arr[], int n)
{
    int ans = 0, i;
    for (i = 0; i < n; i++)
        ans += arr[i];
    return ans;
}

int average(int arr[], int n)
{
    int i, avg, add = 0;
    for (i = 0; i < n; i++)
        add += arr[i];
    avg = add / n;
    return avg;
}

int largest(int arr[], int n)
{
    int i, max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int smallest(int arr[], int n)
{
    int i, min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}
