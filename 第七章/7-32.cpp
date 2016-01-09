#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int num,i,sum=1;
	
	printf("請輸入：");
	scanf("%d",&num);
	
	for (i=2;i<num;i++)
	{
		
		if(num%i==0) 
		sum--; 
	}
	
	if(sum>=1)
	{ 
	printf("%d是質數",sum);
	} 
	
	if(sum<=0)
	{
	printf("%d不是質數",sum);
	} 
	system("pause");
	return 0;

}
