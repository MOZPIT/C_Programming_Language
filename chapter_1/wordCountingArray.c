#include <stdio.h>

/* count digits, white space, others */
int main()
{
	int c, i, nwhite, nother;
	int ndigit[10];

	/* set variables to 0 */
	nwhite = nother = 0;
	/* add a zero to every element of the array */
	for(i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			/* add a 1 to the position within the array equivalent to the number entered from 0 to 9 */
			++ndigit[c-'0'];
		else if ( c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else 
			++nother;

	/* print all digits in the array */
	printf("digits =");
	for(i = 0; i < 10; i++)
		printf(" %d", ndigit[i]);
	printf(", white space = %d, other = %d\n", nwhite, nother);
	
	return 0;	
}
