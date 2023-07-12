#include <stdarg.h>
#include <stdio.h>
/*
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.
*/

int main(void)
{
	char *ptr = "HHello";
	printf("ptr: %d\n", *ptr);
	printf("u: %u\n", 452);
	printf("x: %x\n", 452);
	printf("X: %X\n", 452);
	printf("hello%%hell\n");
	int num = printf("hello");
	printf("\nnum:%d\n", num);
	void *ptrr = 0;
	printf("ptr:%p\n", ptrr); 
        return 0;
}
