#include <stdio.h>

int main(void)
{
	int c, backspace, tab, backslash;

	backspace =0;
	tab = backspace;
	backslash= tab;



	while ((c=getchar()) != EOF)
	{
		if (c == '\t')
		{	printf("\\t");
			++tab;
		}
		else if (c == '\b')
		{	
			printf("\\b");
			++backspace;
		}
		else if (c == '\\')
		{	
			printf("\\\\");
			++backslash;
		}
		else
			putchar(c);

	}
	
	printf("\nThe total numbers of TABs = %d, of BACKSPACEs = %d, and, of BACKSLASHes = %d\n", tab, backspace, backslash);

	return 0;
}
