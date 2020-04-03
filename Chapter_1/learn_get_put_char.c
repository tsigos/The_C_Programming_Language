#include <stdio.h>

main()
{
 	int c;
	int eof;

	while((c=getchar())!=EOF)
	{
		putchar(c);
		putchar(c != EOF);
		putchar('\n');
	
	}
}
