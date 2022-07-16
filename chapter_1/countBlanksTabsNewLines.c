#include <stdio.h>

/* Excercise 1-8: write a program to count blanks, tabs and newlines. */

int main()
{
	int c, blanks, tabs, newlines;

	blanks = 0;
	tabs = 0;
	newlines = 0;

	while((c = getchar()) != EOF)
		if ( c == ' ' )
			++blanks;
		else if ( c == '\t' )
			++tabs;
		else if ( c == '\n' )
			++newlines;
	printf("Blanks: %d Tabs: %d New Lines: %d", blanks, tabs, newlines); 
	return 0;
}
