// If the input array is [10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60],
// your program should be able to find that the subarray lies between the indexes 3 and 8.

// by-Abhinav Bajaj
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60};
    int i, x, y, n = (sizeof(arr) / sizeof(arr[0]));
    for (i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1]) // finding the element which is greater than its next element ..i.e the starting
        {
            x = i; // point where array gets unsorted
            break;
        }
    }
    for (i = n - 1; i >= 0; i--)
    {
        if (arr[i] < arr[i - 1]) //// finding the element which is smaller than its previous element ..i.e the ending
        {
            y = i; // point where array is unsorted
            break;
        }
    }

    cout << "The unsorted subarray lies between " << x << " and " << y << endl;
}