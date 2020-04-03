#include <stdio.h>

int main(void)
{
	int space, tab, nl, c, d;

	space =0;
	tab = space;
	nl = tab;

	while ((c=getchar()) != EOF)
	{
		if (c != ' ')
			putchar(c);
		else
		{
			putchar(c);
			while ((d=getchar()) != EOF)
			{
				if (d == ' ')
					;
				else
					putchar(d);
					break;
			}
		}
	}
	

/*	printf("\nThe number of spaces is: %d\nThe number of tabs is: %d\nThe number of \"new lines\" is %d\n\n", space, tab, nl);
*/
	return 0;
}
