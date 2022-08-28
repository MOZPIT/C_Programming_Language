#include <stdio.h>
int main()
{
	//declare a buffer of memory to be filled with integers
	int arr[5]; 
	arr[0] = 11;
	arr[1] = 12;
	arr[2] = 13;
	arr[3] = 14;
	arr[4] = 15;
	for(int i = 0; i < 5; i++){
		printf("\n Array value at position %i: %i \n", i, arr[i]);
	}

	//The below line prints the value stored in the chunk of memory where the array is pointing to
        //although it is not a value of the array we declared, it still retrieves a value.
	printf("\n Array value at position 7: %i \n", arr[7]);
}
