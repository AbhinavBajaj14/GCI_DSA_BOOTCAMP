// program to find one's complement of a binary number.
//   by-Abhinav Bajaj

#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int i, x, j;
    string bin;
    cout << "Enter any binary number " << endl;
    cin >> bin;
    cout << "The one's complement of the entered binary number is " << endl;
    x = bin.size();
    for (i = 0; i < x; i++)
    {
        if (bin[i] == '0')
            bin[i] = '1';

        else if (bin[i] == '1')
            bin[i] = '0';
    }
    for (j = 0; j < x; j++)
        cout << bin[j];
    cout << endl;
}