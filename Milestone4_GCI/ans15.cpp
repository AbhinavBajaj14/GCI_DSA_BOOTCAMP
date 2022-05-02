// star pattern program
//  by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int i, j, k = 0, l;

    for (i = 1; i <= 9; i++)
    {
        if (i < 6)
            k++;
        else
            k--;
        l = 1;
        for (j = 1; j <= 5; j++)
        {
            if (j >= 6 - k)
            {
                cout << l;
                l++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
