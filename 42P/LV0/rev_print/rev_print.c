/*
======================================./1-3-rev_print.txt=========================================
Assignment name  :
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$
==========================================================================================
*/

#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int leng = 0;
        while (argv[1][leng])
        {
            leng++;
        }
        while (leng != 0)
        {
            write(1, &argv[1][--leng], 1);
        }
    }
    write(1, "\n", 1);
}