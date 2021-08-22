#include <stdio.h>
#include <stdlib.h>
#include"mergeSort.h"

// Merge function called by mergeSort
// Merges two sub Arrays of arr[],
// First sub Array is arr[l..m]
// Second sub Array is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    // create temp arrays
    int L[n1], R[n2];
    //Copy data to temp arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    // Merge the temp arrays back into arr[l..r]
    i = 0; // Initial index of first sub Array
    j = 0; // Initial index of second sub Array
    k = l; // Initial index of merged sub Array
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

     //Copy the remaining elements of L[], if there are
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are .
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// l is for the first index and r is for the last index
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {

        int m = l + (r - l) / 2;//get Middle same as (l+r)/2, but to avoid overflow for large l and h
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}
