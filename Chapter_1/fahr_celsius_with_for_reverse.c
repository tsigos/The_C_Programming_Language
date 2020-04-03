#include <stdio.h>

main()
{
	float fahr;

	for (fahr = 300.0; fahr >= 0.0; fahr = fahr - 20.0)
	printf("\t%3.3f %6.3f\n", fahr, (5.0/9.0)*(fahr-32.0));
}
