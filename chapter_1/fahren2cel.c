#include <stdio.h>

/* print Fahrenheit-Celsius table
     for fahr = 0, 20, .... , 300 */
int main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;      /* lower limit of temp scale */
	upper = 300;    /* upper limit */
	step = 20;      /* step size */

	fahr = lower;
	printf("Fahrenheit\tCelsius\n");
	printf("========\t==========\n");
	while (fahr <= upper){
		celsius = (5.0/9.0) * (fahr-32.0);
	        /*printf is a general-purpose output formatting function. Its first
		 * argument is a string of characters to be printed, with each % indicating
		 * where one or the other arguments is to be substituted, and in what form
		 * is to be printed. %d specifies an integer argument. %3d prints the integer
		 * as 3 digit wide and %6d prints it as 6-digit wide */	
		printf("%3.0f\t\t%6.2f\n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}
