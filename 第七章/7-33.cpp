#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i,num,sum;
	
	printf("½Ð¿é¤J¡G");
	scanf("%d",&num);
	
	for (i=2;i<num;i++)
	{
		if(num%i!=0)
		sum=i;
	}
		
	
	printf("%d",sum);
	
	system("pause");
	return 0;
}

