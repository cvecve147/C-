#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i;
	float num [5],sum;
	
	for (i=0;i<=4;i++)
	{
		printf("%d:",i+1);
		scanf("%f",&num[i]);
		sum+=num[i];
	}
	
	printf("sum/5=%f",sum/5);
	
	system("pause");
	return 0;
}
