#include <stdio.h>
#include <stdlib.h>
#include"swap.h"
#include"bubbleSort.h"

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
       /* Last i elements are already in place , so a wall moves one element before increasing number of sorted elements
       and decreasing number of unsorted ones
       */
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
