#include <stdio.h>
#include <stdlib.h>
#include"swap.h"

//swap function used in the sorting Algorithms
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
