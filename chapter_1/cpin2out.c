#include <stdio.h>

/* copy input to output; 1st version */
int main()
{
	int c;

	//printf("%.1f\n", EOF);

	c = getchar();
	/* EOF is an integer define in stdio.h */
	while(c != EOF) { 
		putchar(c);
		c = getchar();
	}

	return 0;
}
