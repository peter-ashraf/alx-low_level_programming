#include "main.h"
/**
  * _memset - function that fills the memory with contant byte
  *@*s: char type Pointer that points to a char value
  *@b: char tybe variable
  *@n: unsigned int type variable
  *Return: always s (pointer)
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++; n--)
	{
		s[i] = b;
	}

	return (s);
}
