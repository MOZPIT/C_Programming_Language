#include <stdio.h>
#include <stdlib.h>

int main(){
	//we declare a char
	char c = 'S';
	//we declare a pointer to char
	char *p;
	//assign address of the char c, to pointer p. To get the address of variable we use &
	p = &c;
	printf("\n This is the value of char: %c ", c);
	//print the memory address where c is located
	printf("\n This is the address of char c: %d ", &c);
	printf("\n This is the address that pointer p is pointing at, which is the address of c: %d", p);
	//we use the * to get the content in the address we are pointing at
	printf("\n This is the content of the address that pointer p is pointing at,  which is the value of c: %c", *p);
	printf("\n This is the address of the pointer (a pointer has to be located somewhere as well as any variable): %d ", &p);
	//Now, we can use pointers to point to the first charof an array of chars, and move thru it
	char *p2;
	//we use malloc to allocate 6 bytes, which allocates it in the heap
	p2 = malloc(6);
	printf("\n This is the address that pointer p2 is pointing at: %d", p2);	
	//Note: memory allocated with malloc, is allocated in the heap, so you see that its value is far
	//from the other values we have printed that were local variables and are allocated in the stack.
	//You will learn more on the stack and the heap later. p2 is pointing to memory in the heap, but
	//it's a local variable, so if we print its address it should be close to the other local variables:
	printf("\n This is the address of p2: %d ", &p2);
	//now we assign values to the bytes we have allocated:
	*(p2+0)='h';
	*(p2+1)='e';
	*(p2+2)='l';
	*(p2+3)='l';
	*(p2+4)='o';
	*(p2+5)=0;
	printf("\n This is the p2 printed as a string: %s ", p2);
	//Note that 0 (the ASCII for NULL), is the end of the string.
	//also note that 0 is diferent from '0', as '0' is actually 48, if you print it as an int
	printf("\n This is the value of zero char, different from null char: %d ", '0');
	//see what happens if we pint a 0 in the middle of our char array:
	*(p2+2)=0;
	printf("\n This is the string we just created: %s ", p2);
	//a string can be created in a shorter way, for instance:
	char *p3=&"hello";
	printf("\n This is the string we just created: %s ", p3);
	//now let's make a pinter to poniter to char, we will use the pointer p that points to the char c
	char **pp;
	pp=&p;
	//Imagine pp is a box (the first box) that contains an address that points to a second box, that
	//contains an address that points to a third box, that cointains a char.
	printf("\n This is the address in which pp is allocated, the address of the first box: %d ", &pp);
	printf("\n This is the address pp points at, the content of the first box: %d ", pp);
	printf("\n This is the content of the second box: %d ", *pp);
	printf("\n This is the content of the third box: %c ", **pp);
	//we can create as many pointers to ponters as we need:
	char ***ppp;
	ppp=&pp;
	printf("\n This is the content of ***ppp: %c ", ***ppp);
	//To explain why this could be useful, we will quote StackOverFlow post that is cool:
	//If you want to have a list of chars (a word), you can se char **sentence
	//If you want a list of sentences (a monologue), you can use char ***monologue
	//If you want a list of monologues (a biography), you can use char ****biography
	//If you want ta list of biographies (a bio-library), you can use char *****biolibrary
	//If you want a list of bio-libraries ( a ??lol), you can use char ******lol

	//Implement a list of words 
	char **pp2=malloc(100);
	//pp is the first address
	*pp2=&"Hi";
	*(pp2+1)=&"Carnegie";
	*(pp2+2)=&"Mellon";
	printf("\n This is hi: %s ", *pp2);
	printf("\n This is Carnegie: %s ", *(pp2+1));
	printf("\n This is Mellon: %s ", *(pp2+2));
	//Arrays in C are just pointers. arr is pointer to the first element:
	char arr[5]="hello";
	//these expressions are the same:
	printf("\n This is arr[0]: %c ", arr[0]);
	printf("\n This is *arr: %c ", *(arr+0));
	//as well as:
	printf("\n This is arr[0]: %c ", arr[1]);
	printf("\n This is *(arr+0): %c ", *(arr+1));	
	printf("\n This is arr[1]: %c ", arr[2]);
	printf("\n This is *(arr+1): %c ", *(arr+2));
	printf("\n This is arr[2]: %c ", arr[3]);
	printf("\n This is *(arr+2): %c ", *(arr+3));
	printf("\n This is arr[3]: %c ", arr[4]);
	printf("\n This is *(arr+3): %c ", *(arr+4));
	//Another way to write *(1+a) which is equivalent to *(a+1)
	printf("\n This is 1[arr]: %c ", 1[arr]);		


	return 0;
}
