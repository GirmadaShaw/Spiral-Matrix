/*
Given a sorted array arr[] with possibly duplicate elements, the task is to find indexes of
the first and last occurrences of an element x in the given array.
Input : arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125}, x = 5
Output : First Occurrence = 2
        Last Occurrence = 5
Input : arr[] = {1, 3, 5, 5, 5, 5, 7, 123, 125 }, x = 7
Output : First Occurrence = 6
         Last Occurrence = 6
*/

#include <iostream>
#include <algorithm>

int main()
{
    //int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125}, target = 5;
    // int arr[] = {1, 3, 5, 5, 5, 5, 7, 123, 125 }, target = 7 ;
    int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 }, target = 8 ;


    int size = sizeof(arr) / sizeof(int);

    int start = 0, end = size - 1, mid = start + ((end - start) / 2);
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            start = end = mid;
            while (arr[mid] == arr[start - 1])
                start--;
            while (arr[mid] == arr[end + 1])
                end++;

            break;
        }

        else if (target > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
        mid = start + ((end - start) / 2);
    }

    std ::cout << "First Occurrence: " << start;
    std ::cout << "\nLast Occurrence: " << end;
    std ::cout << "\nFirst Occurrence: " << std :: lower_bound( arr , arr+size , target) - arr;
    std ::cout << "\nLast Occurrence: " << std :: upper_bound( arr, arr+size , target) -arr - 1; 
}