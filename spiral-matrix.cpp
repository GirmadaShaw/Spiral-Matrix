/*
Given a 2D array, print it in spiral form.
*/

#include <iostream>

int main()
{
    const int row = 5, col = 6;
    int total_elements = row * col;

    // int arr[row][col] = {                           //4*4
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12},
    //     {13, 14, 15, 16}
    //                    };

    int arr[row][col] = {// 5*6
                         {1, 2, 3, 4, 5, 100},
                         {6, 7, 8, 9, 10, 90},
                         {11, 12, 13, 14, 15, 80},
                         {16, 17, 18, 19, 20, 70},
                         {21, 22, 23, 24, 25, 60}};

    int i, k = 0, l = 0, m=row , n=col ;

    while (k < m && l < n)
    {
        /* Print the first row from
               the remaining rows */
        for (i = l; i < n; ++i)
        {
            std :: cout << arr[k][i] << " ";
        }
        k++;

        /* Print the last column
         from the remaining columns */
        for (i = k; i < m; ++i)
        {
            std :: cout << arr[i][n - 1] << " ";
        }
        n--;

        /* Print the last row from
                the remaining rows */
        if (k < m)
        {
            for (i = n - 1; i >= l; --i)
            {
               std :: cout << arr[m - 1][i] << " ";
            }
            m--;
        }

        /* Print the first column from
                   the remaining columns */
        if (l < n)
        {
            for (i = m - 1; i >= k; --i)
            {
                std :: cout << arr[i][l] << " ";
            }
            l++;
        }
    }
}