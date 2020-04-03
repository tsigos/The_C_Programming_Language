#include <stdio.h>
// Fahrenheit - Celsius Conversion Table

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; // lower bound
	upper = 200; //upper bound
	step = 20; //step

	celsius = lower;
	while (celsius <= upper) 
	{
		fahr = ((5.0/9.00) * 32 + celsius) * (9.00 / 5.00);
		printf("%3.3f\t%9.3f\n", celsius, fahr);
		celsius = celsius + step;
	}
}

