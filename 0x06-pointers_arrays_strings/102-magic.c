#include <stdio.h>

/**
  * main - prints a number
  *
  * Return: Always 0.
  */
int main(void)
{
	int n;
	int x[5];
	int *p;

	x[2] = 1024;
	p = &n;
	/*
	   * write your code here...
	   * Remember:
	   * - you are not allowed to use a
	   * - you are not allowed to modify p
	   * - only one statement
	   * - you are not allowed to code anything else than this line of code
	   */
	p[5] 98;
	/* ... so that this prints 98\n*/
	printf("x[2] = %d\n", x[2]);
	return (0);
}
