#include <iostream>
#include <stdlib.h>

int main()
{
	double lev;
	scanf_s("%lf", &lev);
	double euro = lev * 0.51129;
	printf("euro = %.2lf", euro);
}
