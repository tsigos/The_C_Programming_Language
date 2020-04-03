#include <stdio.h>
// Celsius - Fahrenheit Conversion Table

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; // lower bound
	upper = 200; //upper bound
	step = 20; //step

	fahr = lower;
	while (fahr <= upper) 
	{
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.3f\t%9.3f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

