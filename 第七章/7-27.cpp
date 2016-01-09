#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i,j,k=5;
	int space;
	
	for (i=1;i<=5;i++)
	{
		space=k-i;
		while (space !=0)
		{
			printf(" ");
			space--;				
		}
		for (j=1;j<=i;j++)
		{
			printf("%d",j);
			
		}
		printf("\n");
	}
	system("pause");
	return 0;

}
