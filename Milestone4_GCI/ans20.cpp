// star pattern program
//  by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int i, j;
    char k;

    for (i = 1; i <= 4; i++)
    {
        k = 'A';
        for (j = 1; j <= 8; j++)
        {
            if (j >= 5 - i && j <= 4 + i)
            {
                if (j == 5)
                    k = '1';
                cout << k;
                k++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
