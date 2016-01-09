#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a=1,sum=0;
	
	while(sum<=1000)
	{
	sum+=a;
	a++;
	}
		
					
	a--;
	printf("A=%d  sum=%d",a,sum);
	
	system("pause");
	return 0;
}
