// program to display sum of 2 matrices
// By - Abhinav Bajaj

#include <iostream>
using namespace std;

int main()
{
    int r, c, i, j;

    cout << "Enter the number of rows of the matrix " << endl;
    cin >> r;
    cout << "Enter the number of columns of the matrix " << endl;
    cin >> c;
    int matrix1[100][100];
    int matrix2[100][100];
    int sum[100][100];
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
    // doing addition
    cout << "The sum of array is : " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // displaying sum of matrices
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}