#include <stdio.h>

/* count characters in input; 1st version 22 */
int main()
{
	long nc;

	nc = 0;
	while(getchar() != EOF)
		++nc;
	/* %ld tells printf that the corresponsind argument is a long integer */
	printf("%ld characters entered!\n", nc);

	return 0;
}
