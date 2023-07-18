#include "main.h"
/**
  * print_alphabet - a function that prints thge alphabets in lowercase.
  * Description: function function.
  * Return: Always 0.
  */

void print_alphabet(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(c + i);
	}
	_putchar('\n');
}
