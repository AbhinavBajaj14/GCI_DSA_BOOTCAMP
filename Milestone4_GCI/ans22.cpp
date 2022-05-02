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
        k = 49;
        for (j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                cout << k;
                k++;
                if (j == 4)
                    k = 65;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
