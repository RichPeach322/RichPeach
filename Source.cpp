#include <stdio.h>
#include <math.h>
#include <time.h>
#include <iostream>
void main()
{
	double a, b, fmax, x, y = 10;
	FILE *f;
	f = fopen("рандом.dat","w");
	scanf("%lf %lf", &a, &b);
	srand(time(NULL));
	if (fabs(a) > fabs(b))
		fmax = a*a;
	else
		fmax = b*b;
	for (int i = 0; i < 2000;i++)
	{
	x = (b - a)*rand() / RAND_MAX + a;
	//y = fmax*rand() / RAND_MAX;
	fprintf(f, "%lf %lf\n", x, y);
	}
}