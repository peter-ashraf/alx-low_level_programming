#include "main.h"
/**
  *_memcpy - copies memory area
  *@*dest: char type pointer
  *@*src: char type pointer
  *@n: int type character
  *Return: always dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned i;

	for (i = 0; n > 0; i++; n--)
	{
		dest[i] = src[i];
	}

	return (dest);
}

