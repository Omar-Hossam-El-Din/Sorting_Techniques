#include <stdio.h>
#include <stdlib.h>
#include"quickSort.h"
#include"swap.h"

/*This function takes the pivot element as last element as , places it in correct place in sorted
and places all smaller to left of pivot and all greater elements to right*/
int partition (int arr[], int low, int high)//low is the first index and high is the last index
{
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element and indicates that next is right position for pivot

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1); // returns the index of the Pivot
}

//The main function to do quick sort
void quickSort(int arr[], int low, int high)//low is the first index and high is the last index
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        //Divide and Conquer
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
