#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int num,i,sum=1;
	
	printf("�п�J�G");
	scanf("%d",&num);
	
	for (i=2;i<num;i++)
	{
		
		if(num%i==0) 
		sum--; 
	}
	
	if(sum>=1)
	{ 
	printf("%d�O���",sum);
	} 
	
	if(sum<=0)
	{
	printf("%d���O���",sum);
	} 
	system("pause");
	return 0;

}
