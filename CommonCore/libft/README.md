*This project has been created as part of the 42 curriculum by jorgferr.*

# Libft

Library with

## Description

The main goal of this project is to recreate a collection of functions that already exists. It was requested to build this project to have a better understanding of the actual workflow present on simple functions that we use in every program.

This project was split in 3 parts "libc functions", "Additional Functions" and "Linked Lists".

---

### Main files
	Makefile, libft.h

### Libc Functions

functions that reproduce the behavior of standard C functions

	ft_isalpha:
	Checks whether the character (integer passed) falls within the ASCII range of alphas (Lower or Uppercase). returning a 1 if matches and 0 if doesnt.

	ft_isdigit:
	Checks whether the character (integer passed) falls within the ASCII range of digits. returning a 1 if matches and 0 if doesnt.

	ft_isalnum:
	Using the ft_isalpha and ft_isdigit functions, it checks whether the character (integer passed) falls within the ASCII range of digits or alphas (Lower or Uppercase). i reause the functions to avoid duplication of code.

	ft_isascii:
	Checks whether the character (integer passed) falls within the ASCII Table (0-127).

	ft_isprint:
	 Checks whether the character (integer passed) falls within the ASCII range of printable characters (32-126).

	ft_strlen:
	Counts the length of a string and returns the length.

	ft_memset:
	Replaces the value of a raw memory by receving as parameter, a character and how many bytes want to replace it. and returns the array updated.

	ft_bzero:
	Receives an array and clears the number of bytes passed by parameter.

	ft_memcpy:
	receives 2 arrays and copies the source to destination the number of bytes passed as parametes. and returns the destination updated.

	ft_memmove:
	Copies in case of a destination is larger than the source it will start changing backwards otherwise will be forwards, this will handle the overlap, ensuring the data is preserved.

	ft_strlcpy:
	Copies to the the destination the array the number of bytes set in parameters and return the source length.


	ft_strlcat:


	,toupper, tolower, strchr, strrchr, strncmp, memchr, memcmp, strnstr, atoi

### Additional Functions
	ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa, ft_strmapi, ft_striteri, ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

### Linked Lists
	ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap


## Instructions

### How to compile?
	make all or just make
### How to clean everything
	make fclean
### How to clean and rebuild
	make re

You can also add these lines in the Makefile to proceed with the testing.

	main:
	$(CC) $(CFLAGS) main.c -L. -lft -o test

	clmain:
	$(RM) test

this will add a easy and quickly way to compile the main, see the e.g bellow:

	make main:
	gcc -Wall -Wextra -Werror main.c -L. -lft -o test

	run:
	./test

	make clmain:
	rm -f test

## Resources

#### Terminal:
	man $function$;

#### Websites:
	https://www.w3schools.com/
	https://stackoverflow.com/
	https://man7.org/linux/man-pages/

	Via Youtube i used the following channels:
	https://www.youtube.com/@BroCodez
	https://www.youtube.com/@nesoacademy
	https://www.youtube.com/@programizstudios

#### My Peers

#### Claude & Gemini
	These tools were very helpful to guide me and to search concepts that i wasnt familiar with.

	Mostly used to translate the program description in a way i can understand what is requested.

	Questioned the AI to check how can i improve my final versions, in order to validate if can be improved.

	Checklist the completation of the project, for organization purposes.

	e.g. of prompts were used:
	->
