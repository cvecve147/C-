#include <stdio.h>
#include <stdlib.h>
int power(int base,int n);
double my_fun(int);
int main (void)
{
	int i;
	for (i=1;i<=100000;i++)
	{
		my_fun(i);
		if (my_fun(i)>=0.99999)
		{
			printf("i=%d",i);
			break;
		}
	}
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
}
double my_fun(int n)
{
	double sum=0.0;
	int i;
	for (i=1;i<=n;i++){
		//printf("i=%d\n",i);
	sum+=1.0/power(2,i);
	//printf("sum=%lf\n",sum);
	}
	
	return sum;	
}
int power(int n,int i)
{
	int power=1;
	int j;
	
	for(j=1;j<=i;j++){
	power=power*n;
	}
	
	//printf("power=%d\n",power);
	return power;
}

