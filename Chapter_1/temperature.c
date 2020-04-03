#include <stdio.h>
// Celsius - Fahrenheit Conversion Table

main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0; // lower bound
	upper = 200; //upper bound
	step = 20; //step

	fahr = lower;
	while (fahr <= upper) 
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%6d\t%20d\n", fahr, celsius);
		fahr = fahr + step;
	}
}

