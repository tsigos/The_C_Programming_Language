#include <stdio.h>

int main(void)
{
 	int c;
	int eofile;

	printf("\n The value of EOF is %d\n", EOF);


	while((c=getchar())!=EOF)
	{
		putchar(c);
		printf("\n");
		eofile = (getchar() != EOF);
		printf("The value of \'eofile\' is %d\n",eofile);
		printf("\n");
		printf("\n The value of EOF + 1 is \"%d\"\n", EOF+1);
	}

}
