#include <iostream>
#include <stdlib.h>

int main()
{
	double inch;
	scanf_s("%lf", &inch);
	double cm = inch * 2.54;
	printf("cm = %.2lf", cm);
}
