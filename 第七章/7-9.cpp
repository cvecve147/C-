#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i;
	int sum;
	
	for (i=1;i<50;i++)
	if(i%2==1)
	sum+=i*i;
	else if (i%2==0)
	sum-=i*i;
	
	printf("i=%d sum=%d",i,sum);
	
	system("pause");
	return 0;
}
