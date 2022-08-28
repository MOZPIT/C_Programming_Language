#include <stdio.h>

int main(){
	char a='p';
	int b = 12345;
	float c = 1.123456;
	double d = 1.012345678912345;
	printf("\n my char: %c ", a);
	printf("\n my int: %i ", b);
	printf("\n my float: %f ", c);
	printf("\n my double: %.16g \n\n", d);
	
	printf("\n The value of my first variable  is %c, second one is %i, third one is %f ", a, b, c);
	printf("\n This is a double with 3 decimal points: %.4g ", d);
	printf("\n This is a double with 2 decimal points: %.3g ", d);
        printf("\n Here is the ASCII value of the value of variable a which stores letter p: %i", a); 
	return 0;
}
