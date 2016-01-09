#include <stdio.h>
#include <stdlib.h>
double my_fun(int);
int main (void)
{
	int n;
	
	for(n=2;n<=1000000;n++)
	{	
		if(my_fun(n)<0.00001)
		{
			
			printf("%d\n\nmy_fun=%lf",n,my_fun(n));
			break;
		}
	}
	printf("my_fun=%lf",my_fun(340));
	system("pause");
	return 0;	
}
double my_fun(int i)
{
	double num=0.0;
	double sum=0.0;
		
	num=1.0/i;
	//printf("num=%lf",num);
	sum=(1.0/(i-1))-num;
	//printf("sum-=%lf",sum);	
	return sum;
}
