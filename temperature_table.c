#include <stdio.h>
/**
*this line of code uses the formular C=(5/9)(F-32)
*to print table of fahrenheit temperatures and their
*celcius equivalents
*note: C means Celcius and F means Fahrenheit
*/

int main(void)
{
	int fahren, celcius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;

	fahren = lower;
	while (fahren <= upper)
	{
		celcius = 5 * (fahren-32) / 9;
		printf("%d\t%d\n", fahren, celcius);
		fahren = fahren + step;
	}
}
