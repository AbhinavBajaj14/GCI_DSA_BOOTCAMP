// to display the multiplication of row element of two-dimensional array A[4][6] containing integer.
//  By - Abhinav Bajaj

#include <iostream>
using namespace std;

void multiply(int matrix[4][6])
{
    int r_prod = 1, i, j;
    for (i = 0; i < 4; i++)
    {
        r_prod = 1;
        for (j = 0; j < 6; j++)
        {
            r_prod *= matrix[i][j];
        }
        cout << "The product of row " << i << " is " << r_prod << endl;
    }
}
int main()
{
    int matrix[4][6], i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            cout << "Enter element [ " << i << " ] "
                 << " [ " << j << " ] " << endl;

            cin >> matrix[i][j];
        }
    }
    multiply(matrix);
}
