#include "main.h"

/**
 * print_alphabet - Entry point
 * print_alphabet - prints alphabet in lower case
 *
 *
 *
 *
 * Return: Always 0 (Success)
 *
 *
 * Return: no return
 */
void print_alphabet(void)
{
	char ch = 'a';


	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
