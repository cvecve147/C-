#include <stdio.h>
#include <stdlib.h>
int mp(int);
int main (void)
{
	int j;
	
	int i;
	
	for (i=1;i<=100;i++)
	{
		mp(i);
		
		if(mp(i))
		{
			printf("%10d",mp(i));
		}
	}
	
	
	
	
	system("pause");
	return 0;
}

int mp(int i)
{
	int sum=1.0; 
	for(i=1;i<=i;i++)
	{
		sum=sum*2;
	}
	
	int x;
	for (i=1;i<=sum-1;i++)
	{
		if((sum-1)%i==0)
		{
			return 0;
		}
	}
	return 1;
}

