#include <stdio.h>

int main(void)
{
	//counting input lines
	
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("%d\n", nl);
	printf("\n The value of 'c' is: %d\n", 'c');
	
	return 0;

}
