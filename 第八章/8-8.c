#include <stdio.h>
#include <stdlib.h>
double f(double);
int main (void)
{
	double x;
	scanf("%lf",&x);
	f(x);
	
	printf("%lf",f(x));
	system("pause");
	return 0;
}
double f(double x)
{
	double sum; 
	sum=3*x*x*x+2*x-1;
	
	return sum;
}
