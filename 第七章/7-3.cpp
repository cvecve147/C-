#include <stdio.h>	
#include <stdlib.h>
int main (void)
{
	int a;
	int i,sum=0;
	printf("�п�J�Ʀr:");
	scanf("%d",&a);
	
	for(i=1,sum=0;i<=a;i=i+2)
	sum+=i;
	
	printf("�A��J�Ʀr���`�M%d\n",sum);
	
	system ("pause");
	return 0;

}

