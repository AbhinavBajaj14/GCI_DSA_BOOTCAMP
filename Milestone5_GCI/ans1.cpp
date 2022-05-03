// number pattern program
//  by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {
        k = 0;
        for (j = 1; j <= 5; j++)
        {
            if (j <= i)
            {
                k++;
                cout << k;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
