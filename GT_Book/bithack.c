#include <stdio.h>

int main(int argc, char **argv)
{
	int x=5;
	int y=9;
	//This hack is faster than using a if statement
	int result=y^((x^y)&-(x<y));
	printf("\n This is the smallest number %d ", result);

	return 0;
}
