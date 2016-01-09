#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a=1,sum=0;
	
	do
	{
		sum+=a;
		a++;			
	}while (sum<=1000);
	
	a--;
	printf("A=%d  sum=%d",a,sum);
	
	system("pause");
	return 0;
}
