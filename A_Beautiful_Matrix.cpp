// CODE FOR:  A_Beautiful_Matrix   CF: 263A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int matrix[5][5];

    // input
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            cin >> matrix[i][j];
    }

    // finding row and column of digit '1'
    int row, column;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            if (matrix[i][j] == 1)
            {
                row = i + 1;
                column = j + 1;
            }
    }

    // calculation for midpoint of matrix
    cout << abs(3 - row) + abs(3 - column) << endl;

    return 0;
}