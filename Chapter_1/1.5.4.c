#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{

	int c, nl, nw, nc, state;

	state = OUT;

	nl = nw = nc = 0;

	while ((c=getchar()) != EOF)
	{
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("\n Number of Lines: %d, Number of Words: %d, Number of Chars: %d\n", nl, nw, nc);
	return 0;

}

		
