#include <stdio.h>
#include <stdlib.h>
int power (int,int);
int main (void)
{
	int num;
	int x;
	scanf("%d",&num);
	scanf(" %d",&x);
	power(num,x);
	
	printf("%d",power(x,num));
	
	system("pause");
	return 0;
}
int power(int x,int num)
{
	int i;
	int sum=1;
	for (i=1;i<=x;i++)
	sum=sum*num;
	
	return sum;
}
