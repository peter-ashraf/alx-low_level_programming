#include <stdio.h>
/**
  * run_first - a function that runs before main function
  *
  */


void run_first(void) __attribute__((constructor));

void run_first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
