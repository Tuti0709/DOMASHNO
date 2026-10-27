#include <iostream>
#include <stdlib.h>
#include <math.h>

int main()
{
	double x = 0.5;
	double result = sqrt((x * x) - 6 * x + 9);
	printf("result = %.2lf\n", result);
	int b = 7;
	double result2 = (sqrt(b) - sqrt(5)) * (sqrt(b) + sqrt(5));
	printf("result2 = %.2lf\n", result2);
}