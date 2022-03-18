// program to print all odd numbers till 100
//     by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    cout << "The odd numbers till 100 are : " << endl;

    while (i <= 100)
    {
        cout << i << endl;
        i = i + 2;
    }
}