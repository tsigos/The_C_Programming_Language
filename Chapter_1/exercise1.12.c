#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
	int c, state;

	state = OUT;

	while ((c=getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
			;
		else
		{
			putchar(c);
			state = IN;
			break;
		}
	}

	while ((c=getchar()) != EOF)
	{
		if (c == '\n' || c == ' ' || c == '\t')
			state = OUT;
			
		else if (state == IN)
			putchar(c);
		else if (state == OUT)
		{
			putchar('\n');
			putchar(c);
			state  = IN;
		}
	}

	return 0;
}


