#include "main.h"

/**
 * Print_alphabet - Entry point
 *
 *
 *
 * Description: a function that prints the alphabet in lower case
 *
 *
 *
 * Return: no return
 */


void print_alphabet(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
