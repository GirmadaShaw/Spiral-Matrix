/*
Print the matrix in wave pattern 
*/

#include <iostream>

int main()
{
    const int row = 4 , col = 4 ;
    int arr[row][col] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};


        for( int i=0 ; i<row ; i++ )
        {
            for( int j=0 ; j<col ; j++ )
            {
                if( i % 2 == 0)
                    std :: cout << arr[i][j] << " " ;
                else
                    std :: cout << arr[i][col-j-1] << " ";
            }
        }
}