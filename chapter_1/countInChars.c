#include <stdio.h>

int main()
{
	/* count chars in input; 2nd version */
	double nc;

	for ( nc = 0; getchar() != EOF; ++nc)
		//the isolated semicolon is known as the null statement as the grammatical rules of C require that a for
		//statement have a body.
		;
	    	// %f is used for both float and double. %.0f suppresses the printing of the decimal point and the fraction
		// part which is zero.
		printf("%.0f\n", nc);
	
	 return 0;
}
