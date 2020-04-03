#include <stdio.h>

int main(void)
{
	int a;
	
	printf("Please type any single caracter:");
	printf("The value of the expression \"getchar() != EOF\" equals to: %d\n", getchar() != EOF);
	printf("\nThe value of EOF equals to: %d\n", EOF);
}
