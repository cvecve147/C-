#include <stdio.h>
#include <stdlib.h>
int cub(int);
int main (void)
{
	int y;
	scanf("%d",&y);
	
	cub(y);
		
	printf("sum=%d",cub (y));
	
	system("pause");
	return 0;
}
int cub (int y)
{
	int sum;
	
	sum=y*y*y;
	
	return sum;
}
