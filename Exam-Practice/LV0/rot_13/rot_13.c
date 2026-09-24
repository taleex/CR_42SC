/*
======================================./1-1-rot_13.txt=========================================
Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>
==========================================================================================
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	letter;

	if (argc == 2)
	{
		letter = 0;
		while(argv[1][letter])
		{
			if(argv[1][letter] >= 'a' && 'z' >= argv[1][letter])
				argv[1][letter] = (argv[1][letter] - 'a' + 13) % 26 + 'a';
			if(argv[1][letter] >= 'A' && 'Z' >= argv[1][letter])
				argv[1][letter] = (argv[1][letter] - 'A' + 13) % 26 + 'A';
				write(1, &argv[1][letter], 1);
			letter++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
