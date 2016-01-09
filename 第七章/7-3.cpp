#include <stdio.h>	
#include <stdlib.h>
int main (void)
{
	int a;
	int i,sum=0;
	printf("請輸入數字:");
	scanf("%d",&a);
	
	for(i=1,sum=0;i<=a;i=i+2)
	sum+=i;
	
	printf("你輸入數字的總和%d\n",sum);
	
	system ("pause");
	return 0;

}

