#include <stdio.h>

/**
  *main - main code block
  *Description: a program that prints all the numbers of base 16 in
  *lowercase, followed by a new line.
  *Return: 0 - returns good value
  */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	for (digit = 'a'; digit <= 'f'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
