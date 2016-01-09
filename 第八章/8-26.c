#include <stdio.h>
#include <stdlib.h>
void counter(void);
int a;
double rpower(double b,int n);
int main (void)
{
	int i,x=3;
	for (i=1;i<=x;i++)
	{
		printf("rpower=%lf\n",rpower(2.0,i));
	}
	counter();
	
	system("pause");
	return 0;	
}
double rpower(double b,int n)
{	
	a++;
	
	
	int i;
	double sum=1.0;
	for(i=1;i<=n;i++)
	{
		sum*=b;
	}
	return sum;
}
void counter (void)
{
	
	printf("rpowerÁ`¦@©I¥s=%d",a);
	return ;
}
