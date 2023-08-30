#include <stdio.h>

/* doing some arithmetic operations 
   just to understand C programming better
*/
int main (void)
{
	int a =21;
	int b =10;
	int c ;

	c = a + b;
	printf("Line 1 - Value of c is %d\n", c);

	c = a - b;
	printf("Line 2 - Value of c is %d\n", c);

	c = a * b;
	printf("Line 3 - Value of c is %d\n", c);
	
	c = a / b;
	printf("Line 4 - Value of c is %d\n", c);

	c = a % b;
	printf("Line 5 - Value of c is %d\n", c);

	c = a++;
	printf("Line 6 - Value of c is %d\n", c);	

	c = a--;
	printf("Line 7 - Value of c is %d\n", c);
}
