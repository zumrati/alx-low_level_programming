#include "main.h"

/**
 * Print_alphabet - Prints alphabet in lower case
 *
 *
 * Return: 0 (success)
 *
 */
 
void print_alphabet(void)
{
	char ch = 'a';

	for(ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
		_putchar('\n');
}

