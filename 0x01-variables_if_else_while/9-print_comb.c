#include <stdio.h>

/**
  *main - main code block
  *Description: a program that prints all possible combinations of
  *single-digit numbers, each followed by a comma then space.
  *Return: 0 - returns good value
  */
int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}

	putchar('\n');
	return (0);
}
