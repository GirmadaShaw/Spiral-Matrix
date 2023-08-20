/*
Implement Binary Search
*/

#include <iostream>
#include <algorithm>

int main()
{
    int arr[] = {56 , 23 , 12 ,17, 78 } ;
    int size = sizeof(arr) / sizeof(int) ;

    int target = 17 , flag = 0; 

    std :: sort ( arr , arr + size ) ;

    for( int i=0 ; i<size ; i++ )
        std :: cout  << arr[i] << " " ;

    int start = 0 , end = size-1 ;
    int mid = start + ( ( end-start )/2 ) ;

    while( start <= end )
    {
        if( arr[mid] == target )
        {
            flag = 1 ;
            std :: cout << "\nFound at: " << mid ;
            break ;
        }
        else if ( arr[mid] > target )
        {
            end = mid - 1 ; 
        }
        else 
            start = mid + 1 ;
        mid = start + ( ( end-start )/2 ) ;
    }

    if ( flag == 0 )
    {
        std :: cout << "\nElement not present" ;
    }
}