#include <stdio.h>
#include <stdlib.h>
int find (int n);
int main (void)
{
	int sum=1;
	int i;
	for (i=1;i<=1000;i++)
	{
		find (i);
		if(find(i))
		{
			printf("%3d\n",i);
			sum++;
				
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
