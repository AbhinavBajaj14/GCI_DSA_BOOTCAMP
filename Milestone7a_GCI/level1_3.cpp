// Take 20 integer inputs from user and print the following: 1.number of positive numbers 2.number of negative numbers
// 3. number of odd numbers..... 4.number of even numbers ....5.number of 0.
//  by-Abhinav Bajaj

#include <iostream>
using namespace std;

int main()
{
    int arr[20], i, a = 0, b = 0, c = 0, d = 0, e = 0;
    cout << "Enter 20 integers " << endl;
    for (i = 0; i < 20; i++)
        cin >> arr[i];

    for (i = 0; i < 20; i++)
    {
        if (arr[i] > 0)
            a++;

        if (arr[i] < 0)
            b++;

        if (arr[i] % 2 != 0)
            c++;

        if (arr[i] % 2 == 0)
            d++;

        if (arr[i] == 0)
            e++;
    }
    cout << "Number of positive numbers are : " << a << endl;
    cout << "Number of negative numbers are : " << b << endl;
    cout << "Number of odd numbers are : " << c << endl;
    cout << "Number of even numbers are : " << d << endl;
    cout << "Number of 0 are : " << e << endl;
}