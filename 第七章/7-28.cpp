#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i=1,j=1;
	
	do{
		j=1;
		do{			
			printf(" %d*%d=%2d",i,j,i*j);
			j++;
		}while (j<=9);
		
	printf("\n");
	i++;	
	}while (i<=9);
	
	system("pause");
	return 0;
}
