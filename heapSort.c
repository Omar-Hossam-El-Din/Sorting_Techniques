#include <stdio.h>
#include <stdlib.h>
#include"heapSort.h"
#include"swap.h"

// To Heapify a sub Tree rooted with node i ( Zero Based Index )
void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root , by assuming root starts at index 0
    int l = 2 * i + 1; // leftChild = 2*i + 1
    int r = 2 * i + 2; // rightChild = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest , so it is the largest
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i) {
        swap(&arr[i],&arr[largest]);

        // Recursively Heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// The function to do heap sort
void heapSort(int arr[], int n)
{
    // Build Maximum Heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Extracting an element from heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end to obtain the nearly sorted array
        swap(&arr[0],&arr[i]);
        // call Max heapify to the Root element
        heapify(arr, i, 0);
    }
}
