#include <stdio.h>

int main(void)
{
	int space, tab, nl, c, removed_spaces;

	space =0;
	tab = space;
	nl = tab;
	removed_spaces=tab;

	printf("\nThe initial number of removed spaces equals to: %d\n", removed_spaces);
	
	while ((c=getchar()) != EOF)
	{
		if (c != ' ' && space > 0)
		{	
			putchar(' ');
			putchar(c);
			space =0;
		}
		else if (c != ' ' && space == 0)
			putchar(c);
		else
		{
			++space;
			if (space > 1)
				++removed_spaces;
			//printf("The current number of removed spaces equals to: %d\n", removed_spaces);
		}
	}

	printf("\nThe number of removed spaces equals to: %d\n", removed_spaces);

		
	

	return 0;
}
