#include <stdio.h>
#include <stdlib.h>
int prime(int x);
int find_k(int y);
double Euler(int n);

int main (void)
{
	printf("Euler(100)=%lf\n",Euler(100));
	//printf("Euler(1000)=%lf\n",Euler(1000));
	//printf("Euler(10000)=%lf\n",Euler(10000));
	
	system("pause");
	return 0;
}
double Euler(int n)
{
	double sum=0.0;
	int i;
	for(i=3;i<=n;i++)
	{
		
		printf("prime(i)=%d\n",prime(i));
		printf("find_k(i)=%d\n",find_k(i));
		sum+=prime(i)/find_k(i);
	}
	
	return sum;
}
int prime (int x)
{
	int i;
	for (i=2;i<=x-1;i++)
	{
		if(x%i==0)
		{
			return 0;
		}
	}
	return x;
}
int find_k(int y)
{
	int num;
	num=(y-2)/4;
	if(y-(4*num+2)<4*(num+1)+2-y)
	{
	return num*4+2;
	}
	else 
	{
	return (num+1)*4+2;
	}
		
	
}
