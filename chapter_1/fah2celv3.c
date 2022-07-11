#include <stdio.h>

/* These are symbolic constants, they are written in upper case and there is no semicolon at the end */
#define LOWER 0    /* lower limit of table */
#define UPPER 300  /* upper limit */
#define STEP 20    /* step size */

/* print Fahrenheit-Celsius table */
int main()
{
	int fahr;

	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

	return 0;	
}
