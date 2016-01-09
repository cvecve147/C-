#include <stdio.h>
#include <stdlib.h>
double square(double);
int main (void)
{
	double x;
	
	scanf("%lf",&x);
	square(x);
	printf("sum=%lf ",square(x));
	
	system("pause");
	return 0;
}
double square(double x)
{
	int sum;
	sum=x*x;
	
	return sum;
}
