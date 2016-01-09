#include <stdio.h>
#include <stdlib.h>
double my_fun(double,int);
int main (void)
{
	
	printf("my_fun(0.1,5)=%lf\n",my_fun(0.1,5));
	printf("my_fun(0.1,8)=%lf\n",my_fun(0.1,8));
	printf("my_fun(0.2,8)=%lf\n",my_fun(0.2,8));
	
	system("pause");
	return 0;	
}
double my_fun(double power,int num)
{
	double a=0.0;	
	int b=1.0;
	int i;
	double sum=1.0;
	for(i=1;i<=num;i++)
	{
		sum*=power;
		b*=i;
		a+=sum/b;
	}
	
	
	return a;
}
