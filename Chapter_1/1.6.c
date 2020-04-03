#include <stdio.h>

int main(void)
{
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;

	for(i=0; i < 10; ++i)
		ndigit[i] = 0;

	while ((c=getchar()) != EOF)
	{
		if (c >= '0' && c <= '9')
			++ndigit[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	}

	printf("\nDigits:  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9");
	printf("\nCounts: %2d | %2d | %2d | %2d | %2d | %2d | %2d | %2d | %2d | %2d\n", ndigit[0], ndigit[1], ndigit[2], ndigit[3], ndigit[4], ndigit[5], ndigit[6], ndigit[7], ndigit[8], ndigit[9]); 
	for(i=0; i < 10; ++i)
		printf(" %d", ndigit[i]);
	printf(", white spaces = %d, other chars = %d\n", nwhite, nother);

	return 0;
}
