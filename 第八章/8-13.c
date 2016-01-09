#include <stdio.h>
#include <stdlib.h>
double my_fun(int);
int main (void)
{
	printf("my_fun(5)=%lf\n",my_fun(5));
	printf("my_fun(8)=%lf\n",my_fun(8));
	printf("my_fun(10)=%lf\n",my_fun(10));
	
	system("pause");
	return 0;	
}
double my_fun(int i)
{
	double sum=0.0;
	int k;
	for (k=1;k<=i;k++)
	{
		sum+=1.0/k;
	}
	//printf("sum=%lf   ",sum);
	
	return sum;
}
