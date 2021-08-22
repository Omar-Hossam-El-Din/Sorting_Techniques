#include <stdio.h>
#include <stdlib.h>
#include"time.h"
#include"rand.h"

//Function to generate Random Array of integers
void generateArray(int arr[],int n)
{
    int lower = 0;
    int upper = 100;
    srand(time(0)); //sets the starting point for producing a series of pseudo-random integers
    for (int i = 0; i < n; i++) {
        arr[i] = (rand() % (upper - lower + 1)) + lower; //Generating Random numbers within a range from lower to upper
    }


}
