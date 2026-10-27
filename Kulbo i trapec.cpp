#include <iostream>
#include <stdlib.h>

int main()
{
	printf("vuvedi chislo za r h a i b\n");
	const double pi = 3.14;
	double r;
	double h;
	double a;
	double b;
	scanf_s("%lf", &r);
	scanf_s("%lf", &h);
	scanf_s("%lf", &a);
	scanf_s("%lf", &b);
	double V = 4 * pi * r * r * r / 3;
	printf("V = %.2lf\n", V);
	double S = (a + b) * h / 2;
	printf("S = %.2lf\n", S);
}