#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a=1,sum=0,i=2;
	
	
	printf("請輸入：");
	scanf("%d",&a);
	
	a=a;
	while (a%2==1 || a<=0)
	{
	printf("請輸入：");
	scanf("%d",&a); 
	}
	
	i=2;
	while (i<=a)
	{	   
		sum+=i;
		i=i+2;			
	}
    printf("2+....+%d=%d\n",a,sum);
    
	system ("pause");
	return 0;	
}
