// star pattern program
//  by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j >= i)
                cout << "*";
            else if (j < i)
                cout << " ";
        }
        cout << endl;
    }
}