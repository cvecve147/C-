#include <stdio.h>
#include <stdlib.h>
int mod(int,int);
int main(void)
{
	int x=17;
	int y=15;
	mod(x,y);
	printf("%d",mod(x,y));
	system("pause");
	return 0;
}
int mod (int x,int y)
{
	int sum=0;
	x=17;
	y=5;
	
	sum=x/y;
	
	return sum;
}
