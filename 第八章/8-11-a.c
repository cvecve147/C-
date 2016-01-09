#include <stdio.h>
#include <stdlib.h>
int find (int n);
int main (void)
{
	int sum=0;
	int i;
	for (i=1;i<=1000;i++)
	{
		find (i);
		if(find(i))
		{
			sum++;
			if(sum==5 ||sum==7)
			{
				printf("%3d    ",i);
			}		
		}
				
	}
	system("pause");
	return 0;
}
int find (int n)
{
	if(n%3==2 && n%5==3&& n%7==2)
	{
		return 1;		
	}
	return 0;
}
