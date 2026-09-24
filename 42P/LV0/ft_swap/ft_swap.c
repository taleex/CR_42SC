/*
======================================./1-2-ft_swap.txt=========================================
Assignment name  : ft_swap
Expected files   : ft_swap.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.

Your function must be declared as follows:

void	ft_swap(int *a, int *b);
==========================================================================================

*/

void ft_swap(int *a, int *b)
{
    int temp = 0;

    temp = *a;
    *a = *b;
    *b = temp;
}

// #include <stdio.h>
// int main(void)
// {
//     int parm1 = 23;
//     int parm2 = 11;
//     ft_swap(&parm1, &parm2);

//     printf("parm1 %d \nparm2 %d \n", parm1, parm2);
// }