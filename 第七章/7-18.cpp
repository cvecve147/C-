#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a=2,b=1,sum=0;
	
	do
	{
		printf("½Ð¿é¤J");
		scanf("%d",&b);
	}while(b<0 || b%2!=0);
	
	do
	{
		sum+=a;
		a+=2;			
	}while (b>=a);
	
	printf("a=%d %d",a,sum);

	
	system("pause");
	return 0;
	
}
