#include <stdio.h>

void myStartupFun(void) __attribute__ ((constructor));
/**
  * myStartupFun - Prints a string before the main function
  *
  */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
