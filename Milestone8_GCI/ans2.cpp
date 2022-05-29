// user defined functions for square matrix to calculate
// Left diagonal sum
// Right diagonal sum

// By - Abhinav Bajaj

#include <iostream>
using namespace std;
void left_diagonal_sum(int *, int, int);
void right_diagonal_sum(int *, int, int);

int main()
{
    int r, c, i, choice, j;

    cout << "Enter the number of rows of the matrix " << endl;
    cin >> r;
    cout << "Enter the number of columns of the matrix(should be same as rows) " << endl;
    cin >> c;
    int matrix[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "Enter element [ " << i << " ] "
                 << " [ " << j << " ] " << endl;

            cin >> matrix[i][j];
        }
    }
    cout << "Choose the operation you want to perform" << endl;

    cout << "1. left diagonal sum " << endl;
    cout << "2. right diagonal sum " << endl;
    cin >> choice;

    if (choice == 1)
        left_diagonal_sum((int *)matrix, r, c);
    else if (choice == 2)
        right_diagonal_sum((int *)matrix, r, c);
}
void left_diagonal_sum(int *matrix, int r, int c)
{
    int leftsum = 0, i = 0, j = 0;

    while (i < r && j < c)
    {
        leftsum += *(matrix + i * c + j);
        i++;
        j++;
    }
    cout << "The left diagonal sum of the matrix is " << leftsum << endl;
}
void right_diagonal_sum(int *matrix, int r, int c)
{
    int rightsum = 0, i = r - 1, j = 0;
    while (i >= 0 && j <= c - 1)
    {
        rightsum += *(matrix + i * c + j);
        i--;
        j++;
    }
    cout << "The right diagonal sum of the matrix is " << rightsum << endl;
}
