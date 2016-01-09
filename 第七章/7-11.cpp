#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i;
	int a,sum;
	
	for(i=1;i<=1000;i++)
	{
		sum=0;
		for (a=1;a<i;a++)
		{
		if(i%a==0)
		sum+=a;
	    }
	    if(sum==i)
	    printf("%d\n",i);
	}
	system("pause");	
	return 0;	
}
