/*
Given a sorted and rotated array arr[] of size N and a key,
the task is to find the key in the array.
Input  : arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3}, key = 3
Output : Found at index 8
Input  : arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3}, key = 30
Output : Not found
Input : arr[] = {30, 40, 50, 10, 20}, key = 10
Output : Found at index 3
*/

#include <iostream>

int main()
{
    // int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3}, target = 3 ;
    //int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3}, target = 30;
    int arr[] = {30, 40, 50, 10, 20}, target = 10;

    int size = sizeof(arr) / sizeof(int);
    int pivot;

    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] > arr[i + 1])
    //     {
    //         pivot = i;
    //         break;
    //     }
    // }

    int start = 0, end = size - 1, mid = start + ((end - start) / 2);
    while (start <= end)
    {
        if (arr[mid] > arr[mid + 1])
        {
            pivot = mid;
            break;
        }
        if (arr[mid] < arr[mid - 1])
        {
            pivot = mid - 1;
            break;
        }
        if (arr[start] >= arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
        mid = start + ((end - start) / 2);
    }

    if (arr[0] == target)
        std ::cout << "Found at: " << 0;
    else if (arr[size - 1] == target)
        std ::cout << "Found at: " << size - 1;
    else if (arr[0] < target && target <= arr[pivot])
    {
        int start = 0, end = pivot, mid = start + ((end - start) / 2);
        while (start <= end)
        {
            if (arr[mid] == target)
            {
                std ::cout << "Found at: " << mid;
                break;
            }
            else if (target > arr[mid])
                start = mid + 1;
            else
                end = mid - 1;
            mid = start + ((end - start) / 2);
        }
    }
    else if (arr[pivot + 1] <= target && target < arr[size - 1])
    {
        int start = pivot + 1, end = size - 1, mid = start + ((end - start) / 2);
        while (start <= end)
        {
            if (arr[mid] == target)
            {
                std ::cout << "Found at: " << mid;
                break;
            }
            else if (target > arr[mid])
                start = mid + 1;
            else
                end = mid - 1;
            mid = start + ((end - start) / 2);
        }
    }
    else
        std ::cout << "Element not present";
}