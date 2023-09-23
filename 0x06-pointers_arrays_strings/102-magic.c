#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n; /* Initialize pointer p to point to the integer n */

	/**
	* Write your line of code here...
	* Remember:
	* - You are not allowed to use 'a'
	* - You are not allowed to modify 'p'
	* - Use 'p' to directly modify 'n'
	* - Only one statement
	* - You are not allowed to code anything else than this line of code
	* - Your code should be written at line 19, before the ;
	*/
	*p = 98;
	printf("a[2] = %d\n", *p); /* This will print "a[2] = 98\n" */

	return (0);
}
