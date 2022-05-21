// a program to find those pair of elements that has the maximum and minimum difference among all element pairs.
//  by-Abhinav Bajaj

#include <limits>
#include <iostream>
using namespace std;

int main()
{
    int n, i, x, y, a, b;
    cout << "Enter the number of elements you want in the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter n elements of the array in sorted order:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max_diff = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] - arr[i] > max_diff)
            {
                max_diff = arr[j] - arr[i];
                x = arr[i];
                y = arr[j];
            }
        }
    }
    int min_diff = std::numeric_limits<int>::max();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] - arr[i] < min_diff)
            {
                min_diff = arr[j] - arr[i];
                a = arr[i];
                b = arr[j];
            }
        }
    }
    cout << "The elements with maximum difference are " << x << " " << y << endl;
    cout << "The elements with minimum difference are " << a << " " << b << endl;
}