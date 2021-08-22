#include <stdio.h>
#include <stdlib.h>
#include"time.h"
#include"rand.h"
#include"selectionSort.h"
#include"bubbleSort.h"
#include"insertionSort.h"
#include"mergeSort.h"
#include"heapSort.h"
#include"quickSort.h"
#include"printArray.h"

/*Note that the user will enter the required size of the random array to be generated then
will choose the required Sorting Technique to Sort the Generated Random Array with
*/
int main()
{
    int size ;
    printf("Enter the Required Random Array Size : ");
    scanf("%d",&size);
    int arr[size];
    double time_spent = 0.0;// to store the execution time of the used Sorting Technique
    generateArray(arr,size);
    printf("-----------------Sorting Algorithms-------------------\n");
    printf("1.Selection Sort\n");printf("2.Bubble Sort\n");printf("3.Insertion Sort\n");
    printf("4.Merge Sort\n");printf("5.Heap Sort\n");printf("6.Quick Sort\n");
    printf("------------------------------------------------------\n");
    int choice;
    printf("Enter the Desired Sorting Algorithm to Sort the Random Array or 0 to Print the Random Array Without Sorting : ");
    scanf("%d",&choice);
    switch(choice){
    case 0:
        break;
    case 1:;
        clock_t begin = clock();
        selectionSort(arr,size);
        clock_t end = clock();
        time_spent += (double)(end - begin) / CLOCKS_PER_SEC;//calculate Consumed time by finding difference (end - begin) and dividing the difference by CLOCKS_PER_SEC to convert to seconds
        break;
    case 2:;
        begin = clock();
        bubbleSort(arr,size);
        end = clock();
        time_spent += (double)(end - begin) / CLOCKS_PER_SEC;//calculate Consumed time by finding difference (end - begin) and dividing the difference by CLOCKS_PER_SEC to convert to seconds
        break;
    case 3:;
        begin = clock();
        insertionSort(arr,size);
        end = clock();
        time_spent += (double)(end - begin) / CLOCKS_PER_SEC;//calculate Consumed time by finding difference (end - begin) and dividing the difference by CLOCKS_PER_SEC to convert to seconds
        break;
    case 4:;
        begin = clock();
        mergeSort(arr,0,size-1);
        end = clock();
        time_spent += (double)(end - begin) / CLOCKS_PER_SEC;//calculate Consumed time by finding difference (end - begin) and dividing the difference by CLOCKS_PER_SEC to convert to seconds
        break;
    case 5:;
        begin = clock();
        heapSort(arr,size);
        end = clock();
        time_spent += (double)(end - begin) / CLOCKS_PER_SEC;//calculate Consumed time by finding difference (end - begin) and dividing the difference by CLOCKS_PER_SEC to convert to seconds
        break;
    case 6:;
        begin = clock();
        quickSort(arr,0,size-1);
        end = clock();
        time_spent += (double)(end - begin) / CLOCKS_PER_SEC;//calculate Consumed time by finding difference (end - begin) and dividing the difference by CLOCKS_PER_SEC to convert to seconds
        break;
    default :;
        printf("----------Non Valid Choice----------\n");
        break;
    }
    printf("--------------The Array-------------\n");
    printArray(arr,size);
    printf("------------------------------------");
    printf("\nThe Consumed Time is %f Seconds\n", time_spent);
    printf("------------------------------------");
    return 0;
}


