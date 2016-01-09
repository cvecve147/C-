#include<stdio.h>
#include <stdlib.h>
int primt(int);
int main (void)
{
	int i;
	int sum=1;
	for (i=2;i<=30000;i++)
	{
		if(primt(i))
		{
			
			sum++;			
		}
		if (sum>=100)
		{
			printf("i=%-5d  sum=%-5d",i,sum);
			break;
		}
	
	}
	printf("\n");
	
	system("pause");
	return 0;
}
int primt(int num)
{
	int i;
	for (i=2;i<=num-1;i++)
	{
		if(num%i==0)
		{ 
			return 0;
		}
	}
	return 1;
}
