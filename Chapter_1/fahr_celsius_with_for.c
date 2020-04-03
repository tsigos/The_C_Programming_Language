#include <stdio.h>

#define LOWER 0.0
#define UPPER 300.0
#define STEP 20.0

main()
{
	float fahr;


	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
	printf("\t%3.3f %6.3f\n", fahr, (5.0/9.0)*(fahr-32.0));
}
