#include <stdio.h>

int main(void)
{
	double nc;
//	char c;
//	printf("My initial value is: %f", nc);

	for (nc = 0; getchar() != EOF; ++nc)
	{
//		if (c != '\n')
			printf("%f\n", nc);
	}
}

