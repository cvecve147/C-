#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i;
	int num[4];
	for(i=0;i<=4;i++)
	{
		num[i]=i+1;
		printf("num=%d\n",num[i]);
	}
	
	system("pause");
	return 0;	
}
