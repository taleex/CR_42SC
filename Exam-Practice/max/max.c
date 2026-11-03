/*
======================================./2-1-max.txt=========================================
Assignment name  : max
Expected files   : max.c
Allowed functions: 
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
==========================================================================================
*/

int		max(int* tab, unsigned int len)
{
    if (!tab) 
    {
        return (0);
    }
    int biggest = tab[len];
    while(len > 0){
        if(tab[len - 1] < biggest)
            biggest = tab[len - 1];
        len--;
    }

    return (biggest);
}

#include <stdio.h>
int main(void)
{
    int nums[] = {1,6,2,3,0,67};
    printf("%d",max(nums, 6));
}