#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabets in lowercase.
 * Description: function function.
 * Return: 0.
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(c + i);
		}
		_putchar('\n');
	}
}
