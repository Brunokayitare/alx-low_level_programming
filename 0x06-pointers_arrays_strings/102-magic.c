#include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;  /* Initialize pointer p to point to the integer n */
*(p + 5) = 98; /* Now you can safely modify the integer n */
printf("a[2] = %d\n", a[2]); /* This will print "98" */
return (0);
}
