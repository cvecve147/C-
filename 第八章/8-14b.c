#include <stdio.h>
#include <stdlib.h>
double my_fun(double,int);
int main (void)
{
	int n;
	for (n=1;n<=10000;n++)
	{
		if((my_fun(0.1,n)-my_fun(0.1,n-1))<=0.00001)
		{
			printf("my_fun(n-1)=%lf ",my_fun(0.1,n)-my_fun(0.1,n-1));
			printf("N=%d",n);
			break;
		}
	}
	
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
