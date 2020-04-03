#include <stdio.h>

int main(void)
{
		
	long nc; gv;
//	char c;

	nc = 0;
	printf("%ld\n", nc);

	while (getchar() != EOF)
	{
		++nc;
		printf("%ld\n",nc);

/*		if (c != '\n')
		{
			//putchar(c);
			nc++;
			//putchar('\033');
			printf("%ld\n", nc);//counting chars, first version

		}
*/	}
}
