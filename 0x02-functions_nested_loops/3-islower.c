#include "main.h"

/**
  * _islower - checks for lowercase letters.
  * @c: char type letter.
  *Return: 1 if lowercase, 0 otherwise.
  */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
