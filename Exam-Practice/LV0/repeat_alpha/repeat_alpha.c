/*
======================================./1-0-repeat_alpha.txt=========================================
Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
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
		int repeat;

		while (argv[1][letter])
		{
			repeat = 1;
			if ('a' <= argv[1][letter] && argv[1][letter] <= 'z')
				repeat += argv[1][letter] - 'a';
			else if ('A' <= argv[1][letter] && argv[1][letter] <= 'Z')
				repeat += argv[1][letter] - 'A';
			while (repeat)
			{
				write(1, &argv[1][letter],1);
				repeat--;
			}

			letter++;
		}

	}

	write(1, "\n", 1);
	return (0);
}
