// program to multiply array A and B of order NxL and LxM
// By - Abhinav Bajaj

#include <iostream>
using namespace std;

int main()
{
    int r, c, i, j, k, sum;

    cout << "Enter the number of rows of the matrix " << endl;
    cin >> r;
    cout << "Enter the number of columns of the matrix " << endl;
    cin >> c;

    int matrix1[100][100];
    int matrix2[100][100];
    int product[100][100];

    cout << "Enter elements of the 1st matrix " << endl;
    // taking input of 1st matrix
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Enter element [ " << i << " ] "
                 << " [ " << j << " ] " << endl;

            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of the 2nd matrix " << endl;
    // taking input of 2nd matrix
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Enter element [ " << i << " ] "
                 << " [ " << j << " ] " << endl;

            cin >> matrix2[i][j];
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum = 0;
            for (k = 0; k < r; k++)
            {
                sum = sum + matrix1[i][k] * matrix2[k][j];
            }
            product[i][j] = sum;
        }
    }
    // display of product
    cout << "The product matrix is : " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }
}