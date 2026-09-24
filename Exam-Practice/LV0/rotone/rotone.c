/*
======================================./1-4-rotone.txt=========================================
Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>
==========================================================================================
*/

#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int letter = 0;
        while (argv[1][letter])
        {
            if ((argv[1][letter] >= 'a' && 'z' >= argv[1][letter]) || (argv[1][letter] >= 'A' && 'Z' >= argv[1][letter]))
            {
                if (argv[1][letter] == 'z')
                    argv[1][letter] = 'a';
                else if (argv[1][letter] == 'Z')
                    argv[1][letter] = 'A';
                else
                    argv[1][letter] = argv[1][letter] + 1;
            }
            write(1, &argv[1][letter], 1);
            letter++;
        }
    }
    write(1, "\n", 1);
    return (0);
}