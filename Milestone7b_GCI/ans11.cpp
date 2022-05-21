// program to count frequency of each element in an array.
//  by-Abhinav Bajaj
#include <iostream>
using namespace std;

int main()
{
    int n, i, j, count;
    cout << "Enter the number of elements you want in the array" << endl;
    cin >> n;
    int arr[n];
    int freq[n];
    cout << "Enter " << n << " elements of the array :" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[i] = -1;
    }
    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    cout << "Frequency of all elements of the array " << endl;

    for (i = 0; i < n; i++)
    {
        if (freq[i] != 0)
        {
            cout << arr[i] << " occurs " << freq[i] << " times ";
        }
    }
    cout << endl;
}