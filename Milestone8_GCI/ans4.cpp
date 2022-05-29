// 4. Write a user defined function named Upper-half() which takes a two dimensional array A,
// with size N rows and N columns as argument and prints the upper half of the array.

// By - Abhinav Bajaj

#include <iostream>
using namespace std;

void upperhalf(int matrix[100][100], int x, int y)
{
    int i, j;
    for (i = 0; i < x; i++)
    {
        for (j = i; j < y; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int r, c, i, j;

    cout << "Enter the number of rows of the matrix " << endl;
    cin >> r;
    cout << "Enter the number of columns of the matrix " << endl;
    cin >> c;
    int matrix[100][100];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Enter element [ " << i << " ] "
                 << " [ " << j << " ] " << endl;

            cin >> matrix[i][j];
        }
    }
    upperhalf(matrix, r, c);
}